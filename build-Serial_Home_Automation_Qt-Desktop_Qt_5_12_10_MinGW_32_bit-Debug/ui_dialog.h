/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *red_led_on;
    QPushButton *red_led_off;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *green_led_on;
    QPushButton *green_led_off;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *blue_led_on;
    QPushButton *green_led_off_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(704, 258);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 30, 381, 161));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        red_led_on = new QPushButton(widget);
        red_led_on->setObjectName(QString::fromUtf8("red_led_on"));

        horizontalLayout->addWidget(red_led_on);

        red_led_off = new QPushButton(widget);
        red_led_off->setObjectName(QString::fromUtf8("red_led_off"));

        horizontalLayout->addWidget(red_led_off);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        green_led_on = new QPushButton(widget);
        green_led_on->setObjectName(QString::fromUtf8("green_led_on"));

        horizontalLayout_2->addWidget(green_led_on);

        green_led_off = new QPushButton(widget);
        green_led_off->setObjectName(QString::fromUtf8("green_led_off"));

        horizontalLayout_2->addWidget(green_led_off);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        blue_led_on = new QPushButton(widget);
        blue_led_on->setObjectName(QString::fromUtf8("blue_led_on"));

        horizontalLayout_3->addWidget(blue_led_on);

        green_led_off_2 = new QPushButton(widget);
        green_led_off_2->setObjectName(QString::fromUtf8("green_led_off_2"));

        horizontalLayout_3->addWidget(green_led_off_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(40, 30, 151, 161));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        red_led_on->setText(QApplication::translate("Dialog", "Red Led On", nullptr));
        red_led_off->setText(QApplication::translate("Dialog", "Red Led Off", nullptr));
        green_led_on->setText(QApplication::translate("Dialog", "Green Led On", nullptr));
        green_led_off->setText(QApplication::translate("Dialog", "Green Led Off", nullptr));
        blue_led_on->setText(QApplication::translate("Dialog", "Blue Led On", nullptr));
        green_led_off_2->setText(QApplication::translate("Dialog", "Blue Led Off", nullptr));
        label->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff0000;\">Red Led</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#00aa00;\">Green Led</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">Blue Led</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
