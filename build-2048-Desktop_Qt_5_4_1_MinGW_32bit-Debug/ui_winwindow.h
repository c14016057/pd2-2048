/********************************************************************************
** Form generated from reading UI file 'winwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINWINDOW_H
#define UI_WINWINDOW_H

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

class Ui_winwindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QPushButton *keepgoingButton;
    QPushButton *newgameButton;

    void setupUi(QWidget *winwindow)
    {
        if (winwindow->objectName().isEmpty())
            winwindow->setObjectName(QStringLiteral("winwindow"));
        winwindow->resize(500, 680);
        label = new QLabel(winwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 400, 150));
        QFont font;
        font.setFamily(QStringLiteral("Courier New"));
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(winwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 150, 400, 100));
        QFont font1;
        font1.setFamily(QStringLiteral("Courier New"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        lcdNumber = new QLCDNumber(winwindow);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(50, 250, 400, 100));
        keepgoingButton = new QPushButton(winwindow);
        keepgoingButton->setObjectName(QStringLiteral("keepgoingButton"));
        keepgoingButton->setGeometry(QRect(100, 400, 300, 100));
        keepgoingButton->setAutoFillBackground(false);
        keepgoingButton->setStyleSheet(QStringLiteral("background-image: url(:/keepgoing.png);"));
        keepgoingButton->setFlat(true);
        newgameButton = new QPushButton(winwindow);
        newgameButton->setObjectName(QStringLiteral("newgameButton"));
        newgameButton->setGeometry(QRect(100, 540, 300, 100));
        newgameButton->setAutoFillBackground(false);
        newgameButton->setStyleSheet(QStringLiteral("background-image: url(:/newgame.png);"));
        newgameButton->setFlat(true);

        retranslateUi(winwindow);

        QMetaObject::connectSlotsByName(winwindow);
    } // setupUi

    void retranslateUi(QWidget *winwindow)
    {
        winwindow->setWindowTitle(QApplication::translate("winwindow", "Form", 0));
        label->setText(QApplication::translate("winwindow", "You Win!!", 0));
        label_2->setText(QApplication::translate("winwindow", "Score:", 0));
        keepgoingButton->setText(QString());
        newgameButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class winwindow: public Ui_winwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINWINDOW_H
