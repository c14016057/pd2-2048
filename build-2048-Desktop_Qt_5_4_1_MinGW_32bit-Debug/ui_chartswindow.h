/********************************************************************************
** Form generated from reading UI file 'chartswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARTSWINDOW_H
#define UI_CHARTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chartswindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_6;
    QLCDNumber *lcdNumber_7;
    QLCDNumber *lcdNumber_8;
    QLCDNumber *lcdNumber_9;
    QLCDNumber *lcdNumber_10;
    QPushButton *pushButton;

    void setupUi(QWidget *chartswindow)
    {
        if (chartswindow->objectName().isEmpty())
            chartswindow->setObjectName(QStringLiteral("chartswindow"));
        chartswindow->resize(500, 680);
        QFont font;
        font.setFamily(QStringLiteral("Courier New"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        chartswindow->setFont(font);
        label = new QLabel(chartswindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(175, 10, 150, 60));
        QFont font1;
        font1.setFamily(QStringLiteral("Cordia New"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(chartswindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 60, 50));
        label_2->setFont(font);
        label_3 = new QLabel(chartswindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 130, 60, 50));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(chartswindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 180, 60, 50));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(chartswindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 230, 60, 50));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(chartswindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 280, 60, 50));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(chartswindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 330, 60, 50));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(chartswindow);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 380, 60, 50));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(chartswindow);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 430, 60, 50));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(chartswindow);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 480, 60, 50));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(chartswindow);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(9, 530, 81, 50));
        label_11->setAlignment(Qt::AlignCenter);
        lcdNumber = new QLCDNumber(chartswindow);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(90, 80, 400, 50));
        lcdNumber_2 = new QLCDNumber(chartswindow);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(90, 130, 400, 50));
        lcdNumber_3 = new QLCDNumber(chartswindow);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(90, 180, 400, 50));
        lcdNumber_4 = new QLCDNumber(chartswindow);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(90, 230, 400, 50));
        lcdNumber_5 = new QLCDNumber(chartswindow);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));
        lcdNumber_5->setGeometry(QRect(90, 280, 400, 50));
        lcdNumber_6 = new QLCDNumber(chartswindow);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));
        lcdNumber_6->setGeometry(QRect(90, 330, 400, 50));
        lcdNumber_7 = new QLCDNumber(chartswindow);
        lcdNumber_7->setObjectName(QStringLiteral("lcdNumber_7"));
        lcdNumber_7->setGeometry(QRect(90, 380, 400, 50));
        lcdNumber_8 = new QLCDNumber(chartswindow);
        lcdNumber_8->setObjectName(QStringLiteral("lcdNumber_8"));
        lcdNumber_8->setGeometry(QRect(90, 430, 400, 50));
        lcdNumber_9 = new QLCDNumber(chartswindow);
        lcdNumber_9->setObjectName(QStringLiteral("lcdNumber_9"));
        lcdNumber_9->setGeometry(QRect(90, 480, 400, 50));
        lcdNumber_10 = new QLCDNumber(chartswindow);
        lcdNumber_10->setObjectName(QStringLiteral("lcdNumber_10"));
        lcdNumber_10->setGeometry(QRect(90, 530, 400, 50));
        pushButton = new QPushButton(chartswindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 580, 300, 100));
        pushButton->setStyleSheet(QStringLiteral("background-image: url(:/keepgoing.png);"));
        pushButton->setFlat(true);

        retranslateUi(chartswindow);

        QMetaObject::connectSlotsByName(chartswindow);
    } // setupUi

    void retranslateUi(QWidget *chartswindow)
    {
        chartswindow->setWindowTitle(QApplication::translate("chartswindow", "Form", 0));
        label->setText(QApplication::translate("chartswindow", "Charts", 0));
        label_2->setText(QApplication::translate("chartswindow", "1st", 0));
        label_3->setText(QApplication::translate("chartswindow", "2nd", 0));
        label_4->setText(QApplication::translate("chartswindow", "3rd", 0));
        label_5->setText(QApplication::translate("chartswindow", "4th", 0));
        label_6->setText(QApplication::translate("chartswindow", "5th", 0));
        label_7->setText(QApplication::translate("chartswindow", "6th", 0));
        label_8->setText(QApplication::translate("chartswindow", "7th", 0));
        label_9->setText(QApplication::translate("chartswindow", "8th", 0));
        label_10->setText(QApplication::translate("chartswindow", "9th", 0));
        label_11->setText(QApplication::translate("chartswindow", "10th", 0));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chartswindow: public Ui_chartswindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARTSWINDOW_H
