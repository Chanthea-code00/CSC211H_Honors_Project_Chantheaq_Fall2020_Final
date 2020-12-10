#include "stage3.h"
#include "ui_stage3.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

static int point3=0;
static int point5=5;
static int point=10;
static int point2=15;
static int point4=5;

stage3::stage3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stage3)
{
    ui->setupUi(this);
    ui->Display4->setText(QString::number(point));
    QVector<int>x{point5,point,point2,point4};
    QString str;
    for (int i = 0; i < x.size(); ++i)
    {
        if (i > 0)
            str += " , ";
        str += QString::number(x[i]);
    }

    ui->Display4->setText(str);
}

stage3::~stage3()
{
    delete ui;
}

void stage3::on_pushButton_4_clicked()
{
    Evidence3 = new evidence3(this);
    Evidence3->show();
}

void stage3::on_pushButton_clicked()
{
    QString l3answer1 = ui->lineEdit_l31->text();

    if( l3answer1 == "CTF{Lasagna123}"||l3answer1 == "CTF{lasagna123}"){
         QMessageBox::information(this,"answer","You got it right +5 ");
      point3=point3 +5;
      ui->Display3->setText(QString::number(point3));

    }
    else {
        QMessageBox::warning(this,"answer","You got it wrong");
    }
}

void stage3::on_pushButton_2_clicked()
{
    QString l3answer2 = ui->lineEdit_l32->text();

    if( l3answer2 == "CTF{Edwin1999}"||l3answer2 == "CTF{edwin1999}"){
         QMessageBox::information(this,"answer","You got it right +10 ");
      point3=point3 +10;
      ui->Display3->setText(QString::number(point3));

    }
    else {
        QMessageBox::warning(this,"answer","You got it wrong");
    }
}

void stage3::on_pushButton_3_clicked()
{
    QString l3answer3 = ui->lineEdit_l33->text();

    if( l3answer3 == "CTF{Isaacgoogle}"||l3answer3 == "CTF{isaacgoogle}"){
         QMessageBox::information(this,"answer","You got it right +15 ");
      point3=point3 +15;
      ui->Display3->setText(QString::number(point3));

    }
    else {
        QMessageBox::warning(this,"answer","You got it wrong");
    }
}

void stage3::on_checkBox_stateChanged(int arg3)
{
    if(arg3){
        QMessageBox::warning(this,"answer","You got it wrong");
    }
    else{
    }
}

void stage3::on_checkBox_2_stateChanged(int arg3)
{
    if(arg3){
        QMessageBox::information(this,"answer","You got it right +5 ");
        point3=point3 +5;
        ui->Display3->setText(QString::number(point3));
    }
    else{
    }
}
