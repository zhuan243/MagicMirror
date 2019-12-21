/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCalendarWidget *calendarWidget;
    QLabel *date_time;
    QLabel *weather;
    QLabel *Article;
    QLabel *toDoList;
    QLabel *Emails;
    QLabel *ClotheReco;
    QLabel *RecommendedOutfit;
    QLabel *temperatureLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        MainWindow->setMinimumSize(QSize(1920, 1080));
        QFont font;
        font.setPointSize(16);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(22, 22, 22);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QPalette palette;
        QBrush brush(QColor(22, 22, 22, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        centralwidget->setPalette(palette);
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(10, 70, 531, 311));
        calendarWidget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"selection-color: rgb(22, 22, 22);\n"
"alternate-background-color: rgb(22, 22, 22);\n"
"border-color: rgb(22, 22, 22);\n"
"background-color: rgb(22, 22, 22);"));
        date_time = new QLabel(centralwidget);
        date_time->setObjectName(QString::fromUtf8("date_time"));
        date_time->setGeometry(QRect(790, 0, 351, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        date_time->setFont(font1);
        date_time->setAlignment(Qt::AlignCenter);
        weather = new QLabel(centralwidget);
        weather->setObjectName(QString::fromUtf8("weather"));
        weather->setGeometry(QRect(1430, 20, 191, 151));
        Article = new QLabel(centralwidget);
        Article->setObjectName(QString::fromUtf8("Article"));
        Article->setGeometry(QRect(0, 700, 531, 241));
        QFont font2;
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setWeight(75);
        Article->setFont(font2);
        Article->setWordWrap(true);
        toDoList = new QLabel(centralwidget);
        toDoList->setObjectName(QString::fromUtf8("toDoList"));
        toDoList->setGeometry(QRect(10, 450, 531, 151));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        toDoList->setFont(font3);
        toDoList->setWordWrap(true);
        Emails = new QLabel(centralwidget);
        Emails->setObjectName(QString::fromUtf8("Emails"));
        Emails->setGeometry(QRect(1460, 890, 381, 101));
        QFont font4;
        font4.setPointSize(9);
        Emails->setFont(font4);
        Emails->setWordWrap(true);
        ClotheReco = new QLabel(centralwidget);
        ClotheReco->setObjectName(QString::fromUtf8("ClotheReco"));
        ClotheReco->setGeometry(QRect(1540, 350, 381, 371));
        RecommendedOutfit = new QLabel(centralwidget);
        RecommendedOutfit->setObjectName(QString::fromUtf8("RecommendedOutfit"));
        RecommendedOutfit->setGeometry(QRect(1530, 250, 381, 51));
        RecommendedOutfit->setFont(font);
        temperatureLabel = new QLabel(centralwidget);
        temperatureLabel->setObjectName(QString::fromUtf8("temperatureLabel"));
        temperatureLabel->setGeometry(QRect(1630, 70, 131, 61));
        QFont font5;
        font5.setPointSize(24);
        temperatureLabel->setFont(font5);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        date_time->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        weather->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        Article->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">News</span></p></body></html>", nullptr));
        toDoList->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        Emails->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Emails:</span></p></body></html>", nullptr));
        ClotheReco->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        RecommendedOutfit->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Recommended Outfit:</span></p></body></html>", nullptr));
        temperatureLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; color:#ffffff;\">Temp:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
