#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeFunction();
    void headlineFunction();
    void emailFunction();

private:
    Ui::MainWindow *ui;
    QTimer *timeTimer;
    QTimer *newsTimer;
    QTimer *emailTimer;
    int counter;
    int EmailCounter;

};
#endif // MAINWINDOW_H
