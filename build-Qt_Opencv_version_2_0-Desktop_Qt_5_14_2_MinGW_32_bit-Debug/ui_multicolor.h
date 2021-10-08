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

QT_BEGIN_NAMESPACE

class Ui_Multicolor
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *multicolor_back;
    QWidget *widget_3;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget_2;
    QLabel *label;
    QLabel *label_2;
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
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(100, 100));
        widget->setMaximumSize(QSize(150, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font.setPointSize(11);
        widget->setFont(font);
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        verticalLayout->addWidget(pushButton_2);

        multicolor_back = new QPushButton(widget);
        multicolor_back->setObjectName(QString::fromUtf8("multicolor_back"));
        multicolor_back->setFont(font1);
        multicolor_back->setStyleSheet(QString::fromUtf8("QPushButton:hover { background-color: rgb(176, 224, 230); }"));

        verticalLayout->addWidget(multicolor_back);


        gridLayout->addWidget(widget, 0, 0, 2, 1);

        widget_3 = new QWidget(layoutWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 30, 320, 240));
        label_3->setMinimumSize(QSize(320, 240));
        label_3->setMaximumSize(QSize(320, 240));
        label_3->setFont(font1);
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Raised);
        label_3->setLineWidth(2);
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(440, 30, 320, 240));
        label_4->setMinimumSize(QSize(320, 240));
        label_4->setMaximumSize(QSize(320, 240));
        label_4->setFont(font1);
        label_4->setFrameShape(QFrame::Box);
        label_4->setFrameShadow(QFrame::Raised);
        label_4->setLineWidth(2);
        label_4->setScaledContents(true);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(widget_3, 1, 1, 1, 1);

        widget_2 = new QWidget(layoutWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(450, 20, 320, 240));
        label->setMinimumSize(QSize(320, 240));
        label->setMaximumSize(QSize(320, 240));
        label->setFont(font1);
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
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Raised);
        label_2->setLineWidth(2);
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(widget_2, 0, 1, 1, 1);

        Multicolor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Multicolor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 983, 26));
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
        pushButton_5->setText(QCoreApplication::translate("Multicolor", "\345\274\200\345\220\257\347\233\270\346\234\272", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Multicolor", "\344\277\235\345\255\230\345\233\276\347\211\207", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Multicolor", "\346\237\245\347\234\213\344\272\256\345\272\246\346\233\262\347\272\277", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Multicolor", "\346\237\245\347\234\213\344\272\256\345\272\246\345\233\276\347\211\207", nullptr));
        multicolor_back->setText(QCoreApplication::translate("Multicolor", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        label_3->setText(QCoreApplication::translate("Multicolor", "\344\272\256\345\272\246\351\232\217\350\247\222\345\272\246\345\217\230\345\214\226\346\233\262\347\272\277", nullptr));
        label_4->setText(QCoreApplication::translate("Multicolor", "\345\275\251\350\231\271\344\272\256\345\272\246\345\233\276\347\211\207", nullptr));
        label->setText(QCoreApplication::translate("Multicolor", "\346\213\215\346\221\204", nullptr));
        label_2->setText(QCoreApplication::translate("Multicolor", "\347\233\270\346\234\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Multicolor: public Ui_Multicolor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTICOLOR_H
