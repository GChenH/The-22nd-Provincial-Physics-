#ifndef MONOCHROME_H
#define MONOCHROME_H

#include <QMainWindow>
#include <QTimer>
#include <QDir>
#include <QDebug>
#include <QFile>
#include <iostream>
#include <fstream>
#include "opencv2/opencv.hpp"
#include "user/inc/Mat2Qimage.h"
#include "user/inc/low_pass.h"
#include "user/inc/sum.h"

using namespace std;

namespace Ui {
class Monochrome;
}

class Monochrome : public QMainWindow
{
    Q_OBJECT

public:
    explicit Monochrome(QWidget *parent = nullptr);
    ~Monochrome();
    void NextFrame();

signals:
    void monochrome_back_Signal();

public slots:

private slots:
    void on_monochrome_back_clicked();

    void on_monochrome_video_btn_clicked();

    void on_monochrome_save_btn_clicked();

    void on_filter_btn_clicked();

    void on_monochrome_graph_btn_clicked();

private:
    Ui::Monochrome *ui;
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
    cv::Mat mat_filter;
    QImage image_filter;
    double sum_num[sum_length] = {0};
};

#endif // MONOCHROME_H
