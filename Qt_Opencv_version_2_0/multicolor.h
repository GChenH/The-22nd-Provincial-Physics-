#ifndef MULTICOLOR_H
#define MULTICOLOR_H

#include <QMainWindow>
#include <QTimer>
#include <QDir>
#include <iostream>
#include <fstream>
#include "opencv2/opencv.hpp"
#include "user/inc/Mat2Qimage.h"
#include "user/inc/transfer.h"
#include "user/inc/distance.h"
#include "user/inc/qcustomplot.h"

using namespace std;

namespace Ui {
class Multicolor;
}

class Multicolor : public QMainWindow
{
    Q_OBJECT

public:
    explicit Multicolor(QWidget *parent = nullptr);
    ~Multicolor();
    void NextFrame();

signals:
    void multicolor_back_Signal();

public slots:

private slots:
    void on_multicolor_back_clicked();
    void on_multicolor_video_btn_clicked();

    void on_multicolor_save_btn_clicked();

    void on_draw_radius_btn_clicked();

    void on_multicolor_graph_btn_clicked();

private:
    Ui::Multicolor *ui;
    cv::VideoCapture capture;
    cv::Mat frame;
    // 图片的宽度和高度
    int w;
    int h;
    QImage image;
    QTimer *timer;
    QString imagePath; //图片保存路径 在debug文件
    // 保存并显示的图片（mat格式和qimage格式）
    cv::Mat mat_save;
    QImage image_save;
};

#endif // MULTICOLOR_H
