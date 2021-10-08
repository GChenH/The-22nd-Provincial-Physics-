#include "multicolor.h"
#include "ui_multicolor.h"

Multicolor::Multicolor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Multicolor)
{
    ui->setupUi(this);
    ui->plot->hide();
}

Multicolor::~Multicolor()
{
    delete ui;
}

void Multicolor::on_multicolor_back_clicked()
{
    emit multicolor_back_Signal();
    capture.release();
    timer->stop();
    ui->video_label->clear();
    ui->video_label->setText("相机");
    ui->save_label->clear(); // 清除显示
    ui->save_label->setText("拍摄"); // 保持原状态
    ui->radius_label->clear();
    ui->radius_label->setText("半径");
    ui->graph_label->clear();
    ui->graph_label->setText("角度-亮度曲线");
    this->hide();

}

void Multicolor::on_multicolor_video_btn_clicked()
{
    capture.open("http://admin:1234@192.168.6.158:8081");
    capture >> frame;
    if (!frame.empty()){
        w = ui->video_label->width();
        h = ui->video_label->height();
        cv::resize(frame, frame, cv::Size(w, h));
        //flip(frame, frame, 1); // 镜像处理
        image = cvMat2QImage(frame, 1, 1);
        timer = new QTimer(this);
        timer->start(20);
        ui->video_label->clear();
        ui->video_label->setPixmap(QPixmap::fromImage(image));
        ui->video_label->show();
        connect(timer, &QTimer::timeout, this, &Multicolor::NextFrame);
    }
}

void Multicolor::NextFrame()
{
    capture >> frame;
    if (!frame.empty())
    {
        //flip(frame, frame, 1); // 镜像处理
        cv::resize(frame, frame, cv::Size(w, h));
        image = cvMat2QImage(frame, 1, 1);
        ui->video_label->setPixmap(QPixmap::fromImage(image));
        ui->video_label->show();
    }
}


void Multicolor::on_multicolor_save_btn_clicked()
{
    QString appDirPath = QCoreApplication::applicationDirPath();
    imagePath = appDirPath + "/save_multicolor.jpg";
    /*
     * windows的文件路径分隔符是\，而linux的分隔符为/,
     * 要实现window下编写的程序直接应用到linux下，
     * 在构造文件路径时，可以用QDir::toNativeSeparators
     */
    imagePath = QDir::toNativeSeparators(imagePath); //
    image.save(imagePath, "JPG");
    mat_save = cv::imread(imagePath.toStdString());
    image_save = cvMat2QImage(mat_save, 1, 1);
    ui->save_label->clear();
    ui->save_label->setPixmap(QPixmap::fromImage(image_save));
    ui->save_label->show();
}

void Multicolor::on_draw_radius_btn_clicked()
{
    cv::Mat radius_mat;
    radius_mat = mat_save.clone();
    cv::Point2i circle(0, radius_mat.rows / 2);
    cv::Point2i img(radius_mat.cols / 2, radius_mat.rows / 2);
    line(radius_mat, circle, img, cv::Scalar(0, 0, 255), 5);
    QImage radius_img;
    radius_img = cvMat2QImage(radius_mat, 1, 1);
    ui->radius_label->clear();
    ui->radius_label->setPixmap(QPixmap::fromImage(radius_img));
    ui->radius_label->show();
}



void Multicolor::on_multicolor_graph_btn_clicked()
{
    // 若启用相机，则将img改为mat_save
    // cv::Mat img = cv::imread("C:/Users/GCH/Desktop/1003.jpg");
    cv::resize(mat_save, mat_save, cv::Size(640, 480));
    cv::Point2i circle(0, mat_save.rows / 2);  // 圆心像素坐标
    cv::Point2i center_img(mat_save.cols / 2, mat_save.rows / 2);  // 图像中心像素坐标
    // 现在采用自输入深度
    Z_c = 43.0;
    CameraParameters camera(circle, center_img, Z_c);

    // 圆心世界坐标获取
    camera.circle_center_transfer(circle_world);
    // 图像中心像素坐标
    cv::Point3f img_center_world;
    camera.coordinatez_transfer(center_img, img_center_world);

    calculate_distance(circle_world, img_center_world, distance_center2center);

    c = sqrt(Z_c * Z_c + distance_center2center * distance_center2center);
    cv::Point2i pixel_point;
    cv::Point3f pt;

    // 修改x的值以及x每次加的值，可以改变取点间隔。下面的亮度值取点同理。
    for (int x = 1; x < mat_save.cols; ) {
        pixel_point.x = x;
        pixel_point.y = mat_save.rows / 2;
        camera.coordinatez_transfer(pixel_point, pt);
        world_point.push_back(pt);
        x += 1;
        count_world++; // 计算有多少世界坐标点
    }
    qDebug() << "世界坐标点转换个数为：" << count_world;

    cv::Mat img_hsv;
    float brightness = 0;
    vector<float> brightness_sum;
    cvtColor(mat_save, img_hsv, cv::COLOR_BGR2HSV);
    for (int x = 1; x < mat_save.cols; ){
        for(int y_line = 180; y_line < 301; y_line++){
            brightness += img_hsv.at<cv::Vec3b>(y_line, x)[2];
        }
        brightness_sum.push_back(brightness);
        brightness = 0;
        x += 1;
    }
    qDebug() << "亮度值数组大小为：" << brightness_sum.size();


    vector<float> angle_sum;
    angle_calculate(angle_sum);
    qDebug() << "角度值数组大小为："  << angle_sum.size();

    ofstream file_angle;
    file_angle.open("./multicolor_data/angle_data.txt", ios::out);
    for (int i = 0; i < count_world; i++) {
        file_angle << angle_sum.at(i) << endl;
    }
    file_angle.close();

    ofstream file_brightness;
    file_brightness.open("./multicolor_data/brightness_data.txt", ios::out);
    for (int i = 0; i < count_world; i++) {
        file_brightness << brightness_sum.at(i) << endl;
    }
    file_brightness.close();

    qDebug() << "角度、亮度计算已结束";

/*************************************绘图*******************************************/
    //补充.txt路径
    QFile file_mult_x("./multicolor_data/angle_data.txt");
    QFile file_mult_y("./multicolor_data/brightness_data.txt");

    // 均以只读方式打开
    if(!file_mult_x.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "打开angle的txt文件失败";
    }
    else if(!file_mult_y.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "打开brightness的txt文件失败";
    }
    else{
        qDebug() << "成功打开txt文件";
    }
    //存放数据的数组
    QVector<float> array_x;
    QVector<float> array_y;

    //读取数据
    QTextStream stream_x(&file_mult_x);
    while(!file_mult_x.atEnd()){
        float tmp_x;
        QStringList list_x = stream_x.readAll().split("\n");
        QListIterator<QString> iter_x(list_x);
        while(iter_x.hasNext()){
            tmp_x = iter_x.next().toFloat();
            array_x.push_back(tmp_x);
        }
    }

    QTextStream stream_y(&file_mult_y);
    while(!file_mult_y.atEnd()){
        float tmp_y;
        QStringList list_y = stream_y.readAll().split("\n");
        QListIterator<QString> iter_y(list_y);
        while(iter_y.hasNext()){
            tmp_y = iter_y.next().toFloat();
            array_y.push_back(tmp_y);
        }
    }

//    int i, j;
//     //调试能否正确读取数据
//    for(i = 0; array_x[i] != 0; i++){
//        qDebug() << array_x[i];
//    }
//    qDebug()<<i;

//    for(j = 0; array_y[j] != 0 ; j++){
//        qDebug() << array_y[j];
//    }
//    qDebug() << j;


    QVector<double> x, y;//分别存放x和y坐标的数据
    for(int i = 0; array_x[i] != 0; i++)
    {
        x.push_back(array_x.at(i));
    }
    for(int j = 0; array_y[j] != 0; j++)
    {
        y.push_back(array_y.at(j));
    }

    //向绘图区域QCustomPlot(从widget提升来的)添加一条曲线,一个图像可以有多个数据曲线
    ui->plot->addGraph();
    //添加数据
    // graph(0);可以获取某个数据曲线（按添加先后排序）
    // setData();为数据曲线关联数据
    ui->plot->graph(0)->setData(x, y);

    //设置坐标轴标签名称
    ui->plot->xAxis->setLabel("angle");
    ui->plot->yAxis->setLabel("brightness");

    //QCustomPlot::rescaleAxes()函数，会自动设置最合适的显示范围
    ui->plot->rescaleAxes();

    ui->plot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

    // 隐藏不进行显示
    ui->plot->hide();
    //保存图片至build文件夹下
    ui->plot->saveJpg("./plot/multicolor.jpg", 640, 480);

    //label显示曲线，补充图片路径
    QPixmap *pixmap = new QPixmap("./plot/multicolor.jpg");
    pixmap->scaled(ui->graph_label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->graph_label->clear();
    ui->graph_label->setPixmap(*pixmap);
    ui->graph_label->show();
    qDebug() << "图形绘制完成";
/****************************************************************************************/
}
