/********************************************************************************
** Form generated from reading UI file 'monochrome.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONOCHROME_H
#define UI_MONOCHROME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "user/inc/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Monochrome
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QPushButton *monochrome_video_btn;
    QPushButton *monochrome_save_btn;
    QPushButton *monochrome_graph_btn;
    QPushButton *filter_btn;
    QPushButton *monochrome_back;
    QWidget *widget_3;
    QLabel *filter_label;
    QLabel *graph_label;
    QCustomPlot *plot;
    QWidget *widget_2;
    QLabel *save_label;
    QLabel *video_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Monochrome)
    {
        if (Monochrome->objectName().isEmpty())
            Monochrome->setObjectName(QString::fromUtf8("Monochrome"));
        Monochrome->resize(983, 645);
        Monochrome->setMinimumSize(QSize(983, 645));
        Monochrome->setMaximumSize(QSize(983, 645));
        QFont font;
        font.setFamily(QString::fromUtf8("AcadEref"));
        font.setPointSize(11);
        Monochrome->setFont(font);
        centralwidget = new QWidget(Monochrome);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(100, 100));
        widget->setMaximumSize(QSize(150, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font1.setPointSize(11);
        widget->setFont(font1);
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        monochrome_video_btn = new QPushButton(widget);
        monochrome_video_btn->setObjectName(QString::fromUtf8("monochrome_video_btn"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(monochrome_video_btn->sizePolicy().hasHeightForWidth());
        monochrome_video_btn->setSizePolicy(sizePolicy1);
        monochrome_video_btn->setMinimumSize(QSize(130, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        monochrome_video_btn->setFont(font2);
        monochrome_video_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        gridLayout_3->addWidget(monochrome_video_btn, 0, 0, 1, 1);

        monochrome_save_btn = new QPushButton(widget);
        monochrome_save_btn->setObjectName(QString::fromUtf8("monochrome_save_btn"));
        sizePolicy1.setHeightForWidth(monochrome_save_btn->sizePolicy().hasHeightForWidth());
        monochrome_save_btn->setSizePolicy(sizePolicy1);
        monochrome_save_btn->setMinimumSize(QSize(130, 40));
        monochrome_save_btn->setFont(font2);
        monochrome_save_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        gridLayout_3->addWidget(monochrome_save_btn, 1, 0, 1, 1);

        monochrome_graph_btn = new QPushButton(widget);
        monochrome_graph_btn->setObjectName(QString::fromUtf8("monochrome_graph_btn"));
        sizePolicy1.setHeightForWidth(monochrome_graph_btn->sizePolicy().hasHeightForWidth());
        monochrome_graph_btn->setSizePolicy(sizePolicy1);
        monochrome_graph_btn->setMinimumSize(QSize(130, 40));
        monochrome_graph_btn->setFont(font2);
        monochrome_graph_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        gridLayout_3->addWidget(monochrome_graph_btn, 3, 0, 1, 1);

        filter_btn = new QPushButton(widget);
        filter_btn->setObjectName(QString::fromUtf8("filter_btn"));
        sizePolicy1.setHeightForWidth(filter_btn->sizePolicy().hasHeightForWidth());
        filter_btn->setSizePolicy(sizePolicy1);
        filter_btn->setMinimumSize(QSize(130, 40));
        filter_btn->setFont(font2);
        filter_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        gridLayout_3->addWidget(filter_btn, 2, 0, 1, 1);

        monochrome_back = new QPushButton(widget);
        monochrome_back->setObjectName(QString::fromUtf8("monochrome_back"));
        monochrome_back->setMinimumSize(QSize(130, 40));
        monochrome_back->setFont(font2);
        monochrome_back->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        gridLayout_3->addWidget(monochrome_back, 4, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 2, 1);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy2);
        filter_label = new QLabel(widget_3);
        filter_label->setObjectName(QString::fromUtf8("filter_label"));
        filter_label->setGeometry(QRect(40, 30, 320, 240));
        filter_label->setMinimumSize(QSize(320, 240));
        filter_label->setMaximumSize(QSize(320, 240));
        filter_label->setFont(font2);
        filter_label->setFrameShape(QFrame::Box);
        filter_label->setFrameShadow(QFrame::Raised);
        filter_label->setLineWidth(2);
        filter_label->setScaledContents(true);
        filter_label->setAlignment(Qt::AlignCenter);
        graph_label = new QLabel(widget_3);
        graph_label->setObjectName(QString::fromUtf8("graph_label"));
        graph_label->setGeometry(QRect(450, 30, 320, 240));
        graph_label->setMinimumSize(QSize(320, 240));
        graph_label->setMaximumSize(QSize(320, 240));
        graph_label->setFont(font2);
        graph_label->setFrameShape(QFrame::Box);
        graph_label->setFrameShadow(QFrame::Raised);
        graph_label->setLineWidth(2);
        graph_label->setScaledContents(true);
        graph_label->setAlignment(Qt::AlignCenter);
        plot = new QCustomPlot(widget_3);
        plot->setObjectName(QString::fromUtf8("plot"));
        plot->setGeometry(QRect(380, 140, 61, 81));

        gridLayout->addWidget(widget_3, 1, 1, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        widget_2->setMinimumSize(QSize(810, 280));
        widget_2->setMaximumSize(QSize(810, 280));
        save_label = new QLabel(widget_2);
        save_label->setObjectName(QString::fromUtf8("save_label"));
        save_label->setGeometry(QRect(450, 20, 320, 240));
        save_label->setMinimumSize(QSize(320, 240));
        save_label->setMaximumSize(QSize(320, 240));
        save_label->setFont(font2);
        save_label->setFrameShape(QFrame::Box);
        save_label->setFrameShadow(QFrame::Raised);
        save_label->setLineWidth(2);
        save_label->setScaledContents(true);
        save_label->setAlignment(Qt::AlignCenter);
        video_label = new QLabel(widget_2);
        video_label->setObjectName(QString::fromUtf8("video_label"));
        video_label->setGeometry(QRect(40, 20, 320, 240));
        video_label->setMinimumSize(QSize(320, 240));
        video_label->setMaximumSize(QSize(320, 240));
        video_label->setFont(font2);
        video_label->setFrameShape(QFrame::Box);
        video_label->setFrameShadow(QFrame::Raised);
        video_label->setLineWidth(2);
        video_label->setScaledContents(true);
        video_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(widget_2, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        Monochrome->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Monochrome);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 983, 23));
        Monochrome->setMenuBar(menubar);
        statusbar = new QStatusBar(Monochrome);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Monochrome->setStatusBar(statusbar);

        retranslateUi(Monochrome);

        QMetaObject::connectSlotsByName(Monochrome);
    } // setupUi

    void retranslateUi(QMainWindow *Monochrome)
    {
        Monochrome->setWindowTitle(QCoreApplication::translate("Monochrome", "\345\215\225\350\211\262\345\275\251\350\231\271\347\225\214\351\235\242", nullptr));
        monochrome_video_btn->setText(QCoreApplication::translate("Monochrome", "\345\274\200\345\220\257\347\233\270\346\234\272", nullptr));
        monochrome_save_btn->setText(QCoreApplication::translate("Monochrome", "\344\277\235\345\255\230\345\233\276\347\211\207", nullptr));
        monochrome_graph_btn->setText(QCoreApplication::translate("Monochrome", "\344\272\256\345\272\246-\350\247\222\345\272\246\346\233\262\347\272\277", nullptr));
        filter_btn->setText(QCoreApplication::translate("Monochrome", "\344\275\216\351\200\232\346\273\244\346\263\242", nullptr));
        monochrome_back->setText(QCoreApplication::translate("Monochrome", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        filter_label->setText(QCoreApplication::translate("Monochrome", "\346\273\244\346\263\242", nullptr));
        graph_label->setText(QCoreApplication::translate("Monochrome", "\350\247\222\345\272\246-\344\272\256\345\272\246\346\233\262\347\272\277", nullptr));
        save_label->setText(QCoreApplication::translate("Monochrome", "\346\213\215\346\221\204", nullptr));
        video_label->setText(QCoreApplication::translate("Monochrome", "\347\233\270\346\234\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Monochrome: public Ui_Monochrome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONOCHROME_H
