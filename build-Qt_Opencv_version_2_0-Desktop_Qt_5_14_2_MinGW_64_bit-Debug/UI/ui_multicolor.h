/********************************************************************************
** Form generated from reading UI file 'multicolor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTICOLOR_H
#define UI_MULTICOLOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "user/inc/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Multicolor
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *multicolor_video_btn;
    QPushButton *multicolor_save_btn;
    QPushButton *draw_radius_btn;
    QPushButton *multicolor_graph_btn;
    QPushButton *multicolor_back;
    QWidget *widget_3;
    QLabel *radius_label;
    QLabel *graph_label;
    QCustomPlot *plot;
    QWidget *video_save_widget;
    QLabel *save_label;
    QLabel *video_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Multicolor)
    {
        if (Multicolor->objectName().isEmpty())
            Multicolor->setObjectName(QString::fromUtf8("Multicolor"));
        Multicolor->resize(983, 645);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Multicolor->sizePolicy().hasHeightForWidth());
        Multicolor->setSizePolicy(sizePolicy);
        Multicolor->setMinimumSize(QSize(983, 645));
        Multicolor->setMaximumSize(QSize(983, 645));
        centralwidget = new QWidget(Multicolor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 971, 581));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(layoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(130, 40));
        widget->setMaximumSize(QSize(150, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font.setPointSize(11);
        widget->setFont(font);
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        multicolor_video_btn = new QPushButton(widget);
        multicolor_video_btn->setObjectName(QString::fromUtf8("multicolor_video_btn"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(multicolor_video_btn->sizePolicy().hasHeightForWidth());
        multicolor_video_btn->setSizePolicy(sizePolicy2);
        multicolor_video_btn->setMinimumSize(QSize(130, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        multicolor_video_btn->setFont(font1);
        multicolor_video_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        verticalLayout->addWidget(multicolor_video_btn);

        multicolor_save_btn = new QPushButton(widget);
        multicolor_save_btn->setObjectName(QString::fromUtf8("multicolor_save_btn"));
        sizePolicy2.setHeightForWidth(multicolor_save_btn->sizePolicy().hasHeightForWidth());
        multicolor_save_btn->setSizePolicy(sizePolicy2);
        multicolor_save_btn->setMinimumSize(QSize(130, 40));
        multicolor_save_btn->setFont(font1);
        multicolor_save_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        verticalLayout->addWidget(multicolor_save_btn);

        draw_radius_btn = new QPushButton(widget);
        draw_radius_btn->setObjectName(QString::fromUtf8("draw_radius_btn"));
        sizePolicy2.setHeightForWidth(draw_radius_btn->sizePolicy().hasHeightForWidth());
        draw_radius_btn->setSizePolicy(sizePolicy2);
        draw_radius_btn->setMinimumSize(QSize(130, 40));
        draw_radius_btn->setFont(font1);
        draw_radius_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        verticalLayout->addWidget(draw_radius_btn);

        multicolor_graph_btn = new QPushButton(widget);
        multicolor_graph_btn->setObjectName(QString::fromUtf8("multicolor_graph_btn"));
        sizePolicy2.setHeightForWidth(multicolor_graph_btn->sizePolicy().hasHeightForWidth());
        multicolor_graph_btn->setSizePolicy(sizePolicy2);
        multicolor_graph_btn->setMinimumSize(QSize(130, 40));
        multicolor_graph_btn->setFont(font1);
        multicolor_graph_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        verticalLayout->addWidget(multicolor_graph_btn);

        multicolor_back = new QPushButton(widget);
        multicolor_back->setObjectName(QString::fromUtf8("multicolor_back"));
        sizePolicy2.setHeightForWidth(multicolor_back->sizePolicy().hasHeightForWidth());
        multicolor_back->setSizePolicy(sizePolicy2);
        multicolor_back->setMinimumSize(QSize(130, 40));
        multicolor_back->setFont(font1);
        multicolor_back->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        verticalLayout->addWidget(multicolor_back);


        gridLayout->addWidget(widget, 0, 0, 2, 1);

        widget_3 = new QWidget(layoutWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        radius_label = new QLabel(widget_3);
        radius_label->setObjectName(QString::fromUtf8("radius_label"));
        radius_label->setGeometry(QRect(40, 30, 320, 240));
        radius_label->setMinimumSize(QSize(320, 240));
        radius_label->setMaximumSize(QSize(320, 240));
        radius_label->setFont(font1);
        radius_label->setFrameShape(QFrame::Box);
        radius_label->setFrameShadow(QFrame::Raised);
        radius_label->setLineWidth(2);
        radius_label->setScaledContents(true);
        radius_label->setAlignment(Qt::AlignCenter);
        graph_label = new QLabel(widget_3);
        graph_label->setObjectName(QString::fromUtf8("graph_label"));
        graph_label->setGeometry(QRect(440, 30, 320, 240));
        graph_label->setMinimumSize(QSize(320, 240));
        graph_label->setMaximumSize(QSize(320, 240));
        graph_label->setFont(font1);
        graph_label->setFrameShape(QFrame::Box);
        graph_label->setFrameShadow(QFrame::Raised);
        graph_label->setLineWidth(2);
        graph_label->setScaledContents(true);
        graph_label->setAlignment(Qt::AlignCenter);
        plot = new QCustomPlot(widget_3);
        plot->setObjectName(QString::fromUtf8("plot"));
        plot->setGeometry(QRect(370, 200, 51, 71));

        gridLayout->addWidget(widget_3, 1, 1, 1, 1);

        video_save_widget = new QWidget(layoutWidget);
        video_save_widget->setObjectName(QString::fromUtf8("video_save_widget"));
        sizePolicy.setHeightForWidth(video_save_widget->sizePolicy().hasHeightForWidth());
        video_save_widget->setSizePolicy(sizePolicy);
        save_label = new QLabel(video_save_widget);
        save_label->setObjectName(QString::fromUtf8("save_label"));
        save_label->setGeometry(QRect(440, 20, 320, 240));
        save_label->setMinimumSize(QSize(320, 240));
        save_label->setMaximumSize(QSize(320, 240));
        save_label->setFont(font1);
        save_label->setFrameShape(QFrame::Box);
        save_label->setFrameShadow(QFrame::Raised);
        save_label->setLineWidth(2);
        save_label->setScaledContents(true);
        save_label->setAlignment(Qt::AlignCenter);
        video_label = new QLabel(video_save_widget);
        video_label->setObjectName(QString::fromUtf8("video_label"));
        video_label->setGeometry(QRect(40, 20, 320, 240));
        video_label->setMinimumSize(QSize(320, 240));
        video_label->setMaximumSize(QSize(320, 240));
        video_label->setFont(font1);
        video_label->setFrameShape(QFrame::Box);
        video_label->setFrameShadow(QFrame::Raised);
        video_label->setLineWidth(2);
        video_label->setScaledContents(true);
        video_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(video_save_widget, 0, 1, 1, 1);

        Multicolor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Multicolor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 983, 23));
        Multicolor->setMenuBar(menubar);
        statusbar = new QStatusBar(Multicolor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Multicolor->setStatusBar(statusbar);

        retranslateUi(Multicolor);

        QMetaObject::connectSlotsByName(Multicolor);
    } // setupUi

    void retranslateUi(QMainWindow *Multicolor)
    {
        Multicolor->setWindowTitle(QCoreApplication::translate("Multicolor", "\345\244\215\350\211\262\345\275\251\350\231\271\347\225\214\351\235\242", nullptr));
        multicolor_video_btn->setText(QCoreApplication::translate("Multicolor", "\345\274\200\345\220\257\347\233\270\346\234\272", nullptr));
        multicolor_save_btn->setText(QCoreApplication::translate("Multicolor", "\344\277\235\345\255\230\345\233\276\347\211\207", nullptr));
        draw_radius_btn->setText(QCoreApplication::translate("Multicolor", "\347\273\230\345\210\266\345\215\212\345\276\204", nullptr));
        multicolor_graph_btn->setText(QCoreApplication::translate("Multicolor", "\350\247\222\345\272\246-\344\272\256\345\272\246\346\233\262\347\272\277", nullptr));
        multicolor_back->setText(QCoreApplication::translate("Multicolor", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        radius_label->setText(QCoreApplication::translate("Multicolor", "\345\215\212\345\276\204", nullptr));
        graph_label->setText(QCoreApplication::translate("Multicolor", "\350\247\222\345\272\246-\344\272\256\345\272\246\346\233\262\347\272\277", nullptr));
        save_label->setText(QCoreApplication::translate("Multicolor", "\346\213\215\346\221\204", nullptr));
        video_label->setText(QCoreApplication::translate("Multicolor", "\347\233\270\346\234\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Multicolor: public Ui_Multicolor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTICOLOR_H
