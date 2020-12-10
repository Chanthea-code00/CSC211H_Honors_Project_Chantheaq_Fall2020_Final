#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   //Stage1 stage1;
    //stage1.setModal(true);
   // stage1.exec();
    //hide();
    Stage1 = new stage1(this);
    Stage1->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    //hide();
    Stage3 = new stage3(this);
    Stage3->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    //hide();
    Stage2 = new stage2(this);
    Stage2->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    //hide();
    Stage4 = new stage4(this);
    Stage4->show();
}

void MainWindow::on_pushButton_5_clicked()
{

    QFile file("$/Users/chantheaquinland/build-cyber-Desktop_Qt_5_15_1_clang_64bit-Debug/How to Play copy.txt");// reads file with how to play instruction
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"title","Open alternative file");// if the file doesn't open it sh
        Howtoplay=new howtoplay(this);
        Howtoplay->show();
    }
    QTextStream in(&file);
    QString text =in.readAll();
    file.close();// closes file

}

void MainWindow::on_pushButton_7_clicked()
{
    Help=new help(this);// shows help file
    Help->show();
}

void MainWindow::on_pushButton_6_clicked()
{
    Scoreboard=new scoreboard(this);
    Scoreboard->show();
}
