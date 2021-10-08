#include "monochrome.h"
#include "ui_monochrome.h"

Monochrome::Monochrome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Monochrome)
{
    ui->setupUi(this);
    ui->plot->hide();
}

Monochrome::~Monochrome()
{
    delete ui;
}


void Monochrome::on_monochrome_back_clicked()
{
    emit monochrome_back_Signal();
    capture.release();
    timer->stop();
    ui->video_label->clear();
    ui->video_label->setText("相机");
    ui->save_label->clear(); // 清除显示
    ui->save_label->setText("拍摄"); // 保持原状态
    ui->filter_label->clear();
    ui->filter_label->setText("滤波");
    ui->graph_label->clear();
    ui->graph_label->setText("角度-亮度曲线");
    this->hide();
}

void Monochrome::on_monochrome_video_btn_clicked()
{
    capture.open(0);
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
        connect(timer, &QTimer::timeout, this, &Monochrome::NextFrame);
    }
}

void Monochrome::NextFrame()
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

void Monochrome::on_monochrome_save_btn_clicked()
{
//    QString appDirPath = QCoreApplication::applicationDirPath();
//    imagePath = appDirPath + "/save_monochrome.jpg";
//    /*
//     * windows的文件路径分隔符是\，而linux的分隔符为/,
//     * 要实现window下编写的程序直接应用到linux下，
//     * 在构造文件路径时，可以用QDir::toNativeSeparators
//     */
//    imagePath = QDir::toNativeSeparators(imagePath); //
//    image.save(imagePath, "JPG");
    //mat_save = cv::imread(imagePath.toStdString());
    mat_save = cv::imread("C:/Users/GCH/Desktop/test_picture/20.jpg");
    cv::resize(mat_save, mat_save, cv::Size(w, h));
    image_save = cvMat2QImage(mat_save, 1, 1);
    ui->save_label->clear();
    ui->save_label->setPixmap(QPixmap::fromImage(image_save));
    ui->save_label->show();
}


void Monochrome::on_filter_btn_clicked()
{
    cv::resize(mat_save, mat_save, cv::Size(1920, 1080));
    cvtColor(mat_save, mat_save, cv::COLOR_BGR2GRAY);

    mat_filter = ideal_Low_Pass_Filter(mat_save, 100); //半径D0越小，模糊越大；半径D0越大，模糊越小
    mat_filter = mat_filter(cv::Rect(0, 0, mat_save.cols, mat_save.rows));
    cv::resize(mat_filter, mat_filter, cv::Size(w, h));
    image_filter = cvMat2QImage(mat_filter, 1, 1);
    ui->filter_label->clear();
    ui->filter_label->setPixmap(QPixmap::fromImage(image_filter));
    ui->filter_label->show();
}

void Monochrome::on_monochrome_graph_btn_clicked()
{
    // 调试需要 将mat_filter改为img
//    cv::Mat img = cv::imread("C:/Users/GCH/Desktop/1005/1.jpg");
//    cv::cvtColor(img, img, cv::COLOR_BGR2GRAY);
    cv::resize(mat_filter, mat_filter, cv::Size(640, 480));
    sum_pixl(mat_filter, sum_num);
    qDebug() << "array length: " << sizeof(sum_num) / sizeof(sum_num[0]);
    ofstream file_brightness;
    file_brightness.open("./monochrome_data/brightness_data.txt", ios::out);
    for (int i = 0; i < sum_length; i++) {
        file_brightness << sum_num[i] << endl;
    }
    file_brightness.close();

/***************************************像素点与角度关系********************************************/
    float theta[sum_length];
    for(int pixel = 0; pixel < sum_length; pixel++){
        theta[pixel] = -0.0013 * pixel + 138.71;
    }
    ofstream file_angle;
    file_angle.open("./monochrome_data/angle_data.txt", ios::out);
    for (int i = 0; i < sum_length; i++) {
        file_angle << theta[i] << endl;
    }
    file_angle.close();
/***********************************************************************************/

/************************************绘图*******************************************/
    //补充 TXT路径
    QFile file_mon_x("./monochrome_data/angle_data.txt");
    QFile file_mon_y("./monochrome_data/brightness_data.txt");

    // 均以只读方式打开
    if(!file_mon_x.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "打开angle的txt文件失败";
    }
    else if(!file_mon_y.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "打开brightness的txt文件失败";
    }
    else{
        qDebug() << "成功打开txt文件";
    }
    //存放数据的数组
    QVector<float> array_x;
    QVector<float> array_y;

    //读取数据
    QTextStream stream_x(&file_mon_x);
    while(!file_mon_x.atEnd()){
        float tmp_x;
        QStringList list_x = stream_x.readAll().split("\n");
        QListIterator<QString> iter_x(list_x);
        while(iter_x.hasNext()){
            tmp_x = iter_x.next().toFloat();
            array_x.push_back(tmp_x);
        }
    }

    QTextStream stream_y(&file_mon_y);
    while(!file_mon_y.atEnd()){
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
//    qDebug()<< i;

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
    ui->plot->saveJpg("./plot/monochrome.jpg", 640, 480);

    //label显示曲线，补充图片路径
    QPixmap *pixmap = new QPixmap("./plot/monochrome.jpg");
    pixmap->scaled(ui->graph_label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->graph_label->clear();
    ui->graph_label->setPixmap(*pixmap);
    ui->graph_label->show();
    qDebug() << "图形绘制完成";
/***************************************************************************************/
}
