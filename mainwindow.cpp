#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calendarParse.h"
#include "weatherDP.h"
#include "recommendedOutfit.h"

#include "newsDP2.h"
#include "emailDP.h"
#include <QDateTime>
#include <QDebug>
#include <string>
#include <QMovie>
#include <QPixmap>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    std::string systemPath = QDir::currentPath().toStdString();
    counter = 0;
    EmailCounter = 0;

    timeTimer = new QTimer(this);

    connect(timeTimer,SIGNAL(timeout()),this,SLOT(timeFunction()));
    timeTimer->start(1000);

    newsTimer = new QTimer(this);
    connect(newsTimer, SIGNAL(timeout()),this,SLOT(headlineFunction()));
    newsTimer->start(5000);

    emailTimer = new QTimer(this);
    connect(emailTimer, SIGNAL(timeout()),this,SLOT(emailFunction()));
    emailTimer->start(3500);

    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);

    std::string weatherPath = systemPath + "/Res/";
    std::string weatherType = "sunny";
    weatherType = weatherType + ".gif";
    weatherPath = weatherPath + weatherType;

    QMovie *movie = new QMovie(weatherPath.c_str());
    ui->weather->setMovie(movie);
    movie->start();

    //sam's

    calendarParse toDo;
    toDo.parse(systemPath + "/Res/calendarOut.txt");
    QString toDoQStr = QString::fromStdString("To Do: \n" + toDo.getFirst().at(0));
    ui->toDoList->setText(toDoQStr);
    ui->toDoList->setStyleSheet("QLabel {color: white}");


    //Brandon's
    Weather weatherInfo;
    weatherInfo.findWeatherInfo(systemPath + "/Res/weatheroutput.txt");
    recommendedOutfit reco;
    std::string picPath = reco.getOutfitPath(weatherInfo.description,std::stoi(weatherInfo.tempurature),"casual");
    QPixmap recoPic(picPath.c_str());
    ui->ClotheReco->setPixmap(recoPic.scaled(ui->ClotheReco->width(),ui->ClotheReco->height(),Qt::KeepAspectRatio));

    QString temperatureQ = QString::fromStdString(weatherInfo.tempurature).append("\u2103");
    ui->temperatureLabel->setText(temperatureQ);
    ui->temperatureLabel->setStyleSheet("QLabel {color: white}");


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::timeFunction(){

    QTime time = QTime::currentTime();
    QString time_text = time.toString("h:mm:ss AP");
    ui->date_time->setText(time_text);
    ui->date_time->setStyleSheet("QLabel {color: white}");


}

void MainWindow::headlineFunction(){

    counter = counter % 5;

    std::string systemPath = QDir::currentPath().toStdString();

    std::string weatherAPIPath = systemPath + "/Res/newsoutput.txt";

    articles news;
    news.findArticle(weatherAPIPath);

    std::string news1 = news.title[counter];
    QString qstrNews1 = QString::fromStdString(news1);

    ui->Article->setText(qstrNews1);
    ui->Article->setStyleSheet("QLabel {color: white}");

    counter++;
}

void MainWindow::emailFunction(){
    std::string systemPath = QDir::currentPath().toStdString();
    std::string listOfEmails = systemPath + "/Res/list_of_emails.txt";
    std::string emailFile0 = systemPath + "/Res/email_info_0.txt";
    std::string emailFile1 = systemPath + "/Res/email_info_1.txt";
    std::string emailFile2 = systemPath + "/Res/email_info_2.txt";
    std::string emailFile3 = systemPath + "/Res/email_info_3.txt";
    emails email;
    email.findEmails(listOfEmails,emailFile0,emailFile1,emailFile2,emailFile3);
    int len = email.getSize();
    EmailCounter = EmailCounter % len;

    QString emailQ = QString::fromStdString(email.emails.at(EmailCounter));
    ui->Emails->setText(emailQ);
    ui->Emails->setStyleSheet("QLabel {color: white}");
    EmailCounter++;
}


