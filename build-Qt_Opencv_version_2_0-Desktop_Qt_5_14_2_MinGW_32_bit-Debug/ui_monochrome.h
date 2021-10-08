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

QT_BEGIN_NAMESPACE

class Ui_Monochrome
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *monochrome_back;
    QWidget *widget_3;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget_2;
    QLabel *label;
    QLabel *label_2;
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
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        gridLayout_3->addWidget(pushButton_5, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        gridLayout_3->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        gridLayout_3->addWidget(pushButton_2, 3, 0, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        gridLayout_3->addWidget(pushButton_3, 2, 0, 1, 1);

        monochrome_back = new QPushButton(widget);
        monochrome_back->setObjectName(QString::fromUtf8("monochrome_back"));
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
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 30, 320, 240));
        label_3->setMinimumSize(QSize(320, 240));
        label_3->setMaximumSize(QSize(320, 240));
        label_3->setFont(font2);
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Raised);
        label_3->setLineWidth(2);
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(450, 30, 320, 240));
        label_4->setMinimumSize(QSize(320, 240));
        label_4->setMaximumSize(QSize(320, 240));
        label_4->setFont(font2);
        label_4->setFrameShape(QFrame::Box);
        label_4->setFrameShadow(QFrame::Raised);
        label_4->setLineWidth(2);
        label_4->setScaledContents(true);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(widget_3, 1, 1, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        widget_2->setMinimumSize(QSize(810, 280));
        widget_2->setMaximumSize(QSize(810, 280));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(450, 20, 320, 240));
        label->setMinimumSize(QSize(320, 240));
        label->setMaximumSize(QSize(320, 240));
        label->setFont(font2);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Raised);
        label->setLineWidth(2);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 20, 320, 240));
        label_2->setMinimumSize(QSize(320, 240));
        label_2->setMaximumSize(QSize(320, 240));
        label_2->setFont(font2);
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Raised);
        label_2->setLineWidth(2);
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(widget_2, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        Monochrome->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Monochrome);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 983, 26));
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
        pushButton_5->setText(QCoreApplication::translate("Monochrome", "\345\274\200\345\220\257\347\233\270\346\234\272", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Monochrome", "\344\277\235\345\255\230\345\233\276\347\211\207", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Monochrome", "\345\217\215\346\274\224", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Monochrome", "\346\237\245\347\234\213\344\272\256\345\272\246\346\233\262\347\272\277", nullptr));
        monochrome_back->setText(QCoreApplication::translate("Monochrome", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        label_3->setText(QCoreApplication::translate("Monochrome", "\344\272\256\345\272\246\351\232\217\350\247\222\345\272\246\345\217\230\345\214\226\346\233\262\347\272\277", nullptr));
        label_4->setText(QCoreApplication::translate("Monochrome", "\345\217\215\346\274\224", nullptr));
        label->setText(QCoreApplication::translate("Monochrome", "\346\213\215\346\221\204", nullptr));
        label_2->setText(QCoreApplication::translate("Monochrome", "\347\233\270\346\234\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Monochrome: public Ui_Monochrome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONOCHROME_H
