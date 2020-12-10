#include "stage1.h"
#include "ui_stage1.h"
#include "QMessageBox" //needed for use of message box
#include <QFile>  // used for handling files
#include <QTextStream> // for I/O purposes
#include "iostream"
using namespace std;


static int point=0;  //score running totoal
static int point5=5;// score break down numbers
static int point2=10;
static int point3=15;
static int point4=5;


stage1::stage1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stage1)
{
    ui->setupUi(this);
    ui->Display->setText(QString::number(point));
    QVector<int>x{point5,point2,point3,point4}; // vector with for loop for printing
    QString str;
    for (int i = 0; i < x.size(); ++i)
    {
        if (i > 0)
            str += " , ";
        str += QString::number(x[i]);
    }

    ui->Display2->setText(str);// display vector in text box


}


stage1::~stage1() //deconstructor
{
    delete ui;
}
void stage1::on_pushButton_5_clicked()// slot for action when button is pushed
{
    //hide();
    Evidence = new evidence(this); //dynamically allocated new variable used to link windows
    Evidence->show();
}

void stage1::on_pushButton_clicked()
{
    QString l1answer1 = ui->lineEdit_email->text(); // user input from line edit

    if( l1answer1 == "CTF{inegon06@netscape.com}"||l1answer1 == "CTF{Inegon06@netscape.com}"){ // compares answert to see if it is correct
         QMessageBox::information(this,"answer","You got it right +5 "); // message box to alert user
         if(point==0){ // stops multiple entry in point system
      point=point +5; // adds points
      ui->Display->setText(QString::number(point));} // display new point system
        else{
      point=point+0;
         }
    }
    else {
        QMessageBox::warning(this,"answer","You got it wrong");// alerts use of wrong answer
    }
}

void stage1::on_pushButton_2_clicked()
{
    QString l1answer2 = ui->lineEdit_q2->text();

    if( l1answer2 == "CTF{no-reply@dropboxmail.com}"||l1answer2 == "CTF{No-reply@dropboxmail.com}"){
         QMessageBox::information(this,"answer","You got it right +10 ");
          if(point==5){
         point=point +10;
         ui->Display->setText(QString::number(point));}
         else{
            point=point+0;
          }
    }
    else {
        QMessageBox::warning(this,"answer","You got it wrong");
    }
}

void stage1::on_pushButton_3_clicked()
{
    QString l1answer3 = ui->lineEdit_q3->text();

    if( l1answer3 == "CTF{One}"||l1answer3 == "CTF{one}"){
         QMessageBox::information(this,"answer","You got it right +15 ");
         if(point==15){
         point=point +15;
         ui->Display->setText(QString::number(point));}
         else{
            point=point+0;
          }
    }
    else {
        QMessageBox::warning(this,"answer","You got it wrong");
    }
}


void stage1::on_checkBox_stateChanged(int arg1)
{
    if(arg1){
        QMessageBox::warning(this,"answer","You got it wrong");
        if(point==30){
        point=point +5;
        ui->Display->setText(QString::number(point));}
    else{
       point=point+0;
     }
    }
    else{
    }
}


void stage1::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1){
        QMessageBox::information(this,"answer","You got it right +5 ");
        point=point +5;
        ui->Display->setText(QString::number(point));
        point4=5;
    }
    else{
    }
}




