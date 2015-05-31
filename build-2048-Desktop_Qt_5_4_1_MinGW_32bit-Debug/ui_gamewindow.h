/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

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

class Ui_gamewindow
{
public:
    QLabel *title;
    QLabel *score;
    QLabel *best;
    QPushButton *menuButton;
    QPushButton *chartsButton;
    QWidget *gameborad;
    QLCDNumber *lcdscore;
    QLCDNumber *lcdbest;

    void setupUi(QWidget *gamewindow)
    {
        if (gamewindow->objectName().isEmpty())
            gamewindow->setObjectName(QStringLiteral("gamewindow"));
        gamewindow->resize(500, 680);
        QFont font;
        font.setFamily(QStringLiteral("Courier New"));
        font.setPointSize(24);
        gamewindow->setFont(font);
        gamewindow->setFocusPolicy(Qt::StrongFocus);
        title = new QLabel(gamewindow);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(20, 20, 160, 160));
        QFont font1;
        font1.setFamily(QStringLiteral("Courier New"));
        font1.setPointSize(36);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        title->setFont(font1);
        title->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 0);\n"
""));
        title->setAlignment(Qt::AlignCenter);
        title->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        score = new QLabel(gamewindow);
        score->setObjectName(QStringLiteral("score"));
        score->setGeometry(QRect(200, 20, 130, 90));
        QFont font2;
        font2.setFamily(QStringLiteral("Cordia New"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setWeight(75);
        score->setFont(font2);
        score->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 127);"));
        score->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        best = new QLabel(gamewindow);
        best->setObjectName(QStringLiteral("best"));
        best->setGeometry(QRect(350, 20, 130, 90));
        QFont font3;
        font3.setFamily(QStringLiteral("Courier New"));
        font3.setPointSize(28);
        font3.setBold(false);
        font3.setWeight(50);
        best->setFont(font3);
        best->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 127);"));
        best->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        menuButton = new QPushButton(gamewindow);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(200, 130, 130, 50));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 170, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 213, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(255, 191, 63, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 85, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 113, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(255, 212, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        menuButton->setPalette(palette);
        QFont font4;
        font4.setFamily(QStringLiteral("Cordia New"));
        font4.setPointSize(22);
        menuButton->setFont(font4);
        menuButton->setFocusPolicy(Qt::NoFocus);
        menuButton->setStyleSheet(QStringLiteral("background-image: url(:/menu.png);"));
        menuButton->setAutoDefault(false);
        menuButton->setFlat(true);
        chartsButton = new QPushButton(gamewindow);
        chartsButton->setObjectName(QStringLiteral("chartsButton"));
        chartsButton->setGeometry(QRect(350, 130, 130, 50));
        chartsButton->setFocusPolicy(Qt::NoFocus);
        chartsButton->setStyleSheet(QStringLiteral("background-image: url(:/charts.png);"));
        chartsButton->setFlat(true);
        gameborad = new QWidget(gamewindow);
        gameborad->setObjectName(QStringLiteral("gameborad"));
        gameborad->setGeometry(QRect(20, 200, 460, 460));
        gameborad->setStyleSheet(QStringLiteral("background-image: url(:/gameborad.png);"));
        lcdscore = new QLCDNumber(gamewindow);
        lcdscore->setObjectName(QStringLiteral("lcdscore"));
        lcdscore->setGeometry(QRect(210, 60, 110, 40));
        lcdbest = new QLCDNumber(gamewindow);
        lcdbest->setObjectName(QStringLiteral("lcdbest"));
        lcdbest->setGeometry(QRect(360, 60, 110, 40));

        retranslateUi(gamewindow);

        QMetaObject::connectSlotsByName(gamewindow);
    } // setupUi

    void retranslateUi(QWidget *gamewindow)
    {
        gamewindow->setWindowTitle(QApplication::translate("gamewindow", "gamewindow", 0));
        title->setText(QApplication::translate("gamewindow", "2048", 0));
        score->setText(QApplication::translate("gamewindow", "SCORE", 0));
        best->setText(QApplication::translate("gamewindow", "BEST", 0));
        menuButton->setText(QString());
        chartsButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gamewindow: public Ui_gamewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
