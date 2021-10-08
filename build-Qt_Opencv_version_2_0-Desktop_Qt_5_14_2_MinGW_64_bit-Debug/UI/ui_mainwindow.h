/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *multicolor_btn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *monochrome_btn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_close;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(910, 670);
        MainWindow->setMinimumSize(QSize(910, 670));
        MainWindow->setMaximumSize(QSize(910, 670));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMaximumSize(QSize(16777215, 60));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        multicolor_btn = new QPushButton(widget_3);
        multicolor_btn->setObjectName(QString::fromUtf8("multicolor_btn"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(multicolor_btn->sizePolicy().hasHeightForWidth());
        multicolor_btn->setSizePolicy(sizePolicy);
        multicolor_btn->setMinimumSize(QSize(130, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        multicolor_btn->setFont(font);
        multicolor_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }\n"
""));

        horizontalLayout->addWidget(multicolor_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        monochrome_btn = new QPushButton(widget_3);
        monochrome_btn->setObjectName(QString::fromUtf8("monochrome_btn"));
        sizePolicy.setHeightForWidth(monochrome_btn->sizePolicy().hasHeightForWidth());
        monochrome_btn->setSizePolicy(sizePolicy);
        monochrome_btn->setMinimumSize(QSize(130, 40));
        monochrome_btn->setFont(font);
        monochrome_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }\n"
""));

        horizontalLayout->addWidget(monochrome_btn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_close = new QPushButton(widget_3);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        sizePolicy.setHeightForWidth(btn_close->sizePolicy().hasHeightForWidth());
        btn_close->setSizePolicy(sizePolicy);
        btn_close->setMinimumSize(QSize(130, 40));
        btn_close->setFont(font);
        btn_close->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }\n"
""));

        horizontalLayout->addWidget(btn_close);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout_3->addWidget(widget_3, 3, 0, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 380));
        widget_2->setFocusPolicy(Qt::TabFocus);
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 10, 371, 361));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pictures/scnu.png")));
        label->setScaledContents(true);

        gridLayout_3->addWidget(widget_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(200, 80));
        lineEdit->setMaximumSize(QSize(16777215, 80));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(16);
        lineEdit->setFont(font1);
        lineEdit->setFrame(true);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);

        gridLayout_3->addWidget(lineEdit, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 910, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\270\273\347\225\214\351\235\242", nullptr));
        multicolor_btn->setText(QCoreApplication::translate("MainWindow", "\345\244\215\350\211\262\345\275\251\350\231\271", nullptr));
        monochrome_btn->setText(QCoreApplication::translate("MainWindow", "\345\215\225\350\211\262\345\275\251\350\231\271", nullptr));
        btn_close->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label->setText(QString());
        lineEdit->setText(QCoreApplication::translate("MainWindow", "\345\237\272\344\272\216\345\271\263\350\241\214\350\277\236\347\273\255\345\205\211\350\260\261\346\263\225\347\232\204\345\275\251\350\231\271\345\244\215\347\216\260\345\217\212\345\275\261\345\223\215\345\233\240\347\264\240\347\240\224\347\251\266\345\256\236\351\252\214\346\274\224\347\244\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
