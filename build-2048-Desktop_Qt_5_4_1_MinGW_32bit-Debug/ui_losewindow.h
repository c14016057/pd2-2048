/********************************************************************************
** Form generated from reading UI file 'losewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOSEWINDOW_H
#define UI_LOSEWINDOW_H

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

class Ui_losewindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QPushButton *keepgoingButton;
    QPushButton *newgameButton;

    void setupUi(QWidget *losewindow)
    {
        if (losewindow->objectName().isEmpty())
            losewindow->setObjectName(QStringLiteral("losewindow"));
        losewindow->resize(500, 680);
        label = new QLabel(losewindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 400, 150));
        QFont font;
        font.setFamily(QStringLiteral("Courier New"));
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(losewindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 150, 400, 100));
        QFont font1;
        font1.setFamily(QStringLiteral("Courier New"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        lcdNumber = new QLCDNumber(losewindow);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(50, 250, 400, 100));
        keepgoingButton = new QPushButton(losewindow);
        keepgoingButton->setObjectName(QStringLiteral("keepgoingButton"));
        keepgoingButton->setGeometry(QRect(100, 400, 300, 100));
        keepgoingButton->setStyleSheet(QStringLiteral("background-image: url(:/keepgoing.png);"));
        keepgoingButton->setFlat(true);
        newgameButton = new QPushButton(losewindow);
        newgameButton->setObjectName(QStringLiteral("newgameButton"));
        newgameButton->setGeometry(QRect(100, 540, 300, 100));
        newgameButton->setStyleSheet(QStringLiteral("background-image: url(:/newgame.png);"));
        newgameButton->setFlat(true);

        retranslateUi(losewindow);

        QMetaObject::connectSlotsByName(losewindow);
    } // setupUi

    void retranslateUi(QWidget *losewindow)
    {
        losewindow->setWindowTitle(QApplication::translate("losewindow", "Form", 0));
        label->setText(QApplication::translate("losewindow", "Game over!", 0));
        label_2->setText(QApplication::translate("losewindow", "score:", 0));
        keepgoingButton->setText(QString());
        newgameButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class losewindow: public Ui_losewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOSEWINDOW_H
