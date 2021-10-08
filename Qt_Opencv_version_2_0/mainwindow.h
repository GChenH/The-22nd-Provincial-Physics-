#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "multicolor.h"
#include "monochrome.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Multicolor multicolor_win;
    Monochrome monochrome_win;

private slots:
    void on_multicolor_btn_clicked();

    void on_monochrome_btn_clicked();

    void on_btn_close_clicked();

private:
    Ui::MainWindow *ui;
    QApplication* app;
};
#endif // MAINWINDOW_H
