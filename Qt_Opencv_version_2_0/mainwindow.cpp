#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&multicolor_win,&Multicolor::multicolor_back_Signal,this,&MainWindow::show);
    connect(&monochrome_win,&Monochrome::monochrome_back_Signal,this,&MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_multicolor_btn_clicked()
{
    multicolor_win.show();
}

void MainWindow::on_monochrome_btn_clicked()
{
    monochrome_win.show();
}


void MainWindow::on_btn_close_clicked()
{
    app->exit(0);
}
