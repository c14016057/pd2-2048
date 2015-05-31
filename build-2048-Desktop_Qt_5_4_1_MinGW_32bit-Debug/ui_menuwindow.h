/********************************************************************************
** Form generated from reading UI file 'menuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWINDOW_H
#define UI_MENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menuwindow
{
public:
    QLabel *label;
    QPushButton *keepgoing;
    QPushButton *newgame;

    void setupUi(QWidget *menuwindow)
    {
        if (menuwindow->objectName().isEmpty())
            menuwindow->setObjectName(QStringLiteral("menuwindow"));
        menuwindow->resize(500, 680);
        label = new QLabel(menuwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 50, 300, 100));
        QFont font;
        font.setFamily(QStringLiteral("Courier New"));
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        keepgoing = new QPushButton(menuwindow);
        keepgoing->setObjectName(QStringLiteral("keepgoing"));
        keepgoing->setGeometry(QRect(100, 200, 300, 100));
        keepgoing->setFocusPolicy(Qt::NoFocus);
        keepgoing->setStyleSheet(QStringLiteral("background-image: url(:/keepgoing.png);"));
        keepgoing->setFlat(true);
        newgame = new QPushButton(menuwindow);
        newgame->setObjectName(QStringLiteral("newgame"));
        newgame->setGeometry(QRect(100, 400, 300, 100));
        newgame->setFocusPolicy(Qt::NoFocus);
        newgame->setStyleSheet(QStringLiteral("background-image: url(:/newgame.png);"));
        newgame->setFlat(true);

        retranslateUi(menuwindow);

        QMetaObject::connectSlotsByName(menuwindow);
    } // setupUi

    void retranslateUi(QWidget *menuwindow)
    {
        menuwindow->setWindowTitle(QApplication::translate("menuwindow", "MENU", 0));
        label->setText(QApplication::translate("menuwindow", "MENU", 0));
        keepgoing->setText(QString());
        newgame->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class menuwindow: public Ui_menuwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
