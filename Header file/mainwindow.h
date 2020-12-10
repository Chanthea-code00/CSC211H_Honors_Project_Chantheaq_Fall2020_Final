#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stage1.h"
#include "stage3.h"
#include "stage2.h"
#include "stage4.h"
#include "howtoplay.h"
#include "help.h"
#include "scoreboard.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static int pointvalue;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();



    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
    stage1 *Stage1;
    stage2 *Stage2;
    stage3 *Stage3;
    stage4 *Stage4;
    howtoplay *Howtoplay;
    help *Help;
    scoreboard *Scoreboard;

};
#endif // MAINWINDOW_H
