#include "stage2.h"
#include "ui_stage2.h"
#include "QMessageBox"

static int point2=0;
static int point5=5;
static int point=10;
static int point3=15;
static int point4=5;


stage2::stage2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stage2)
{
    ui->setupUi(this);
    ui->Display3->setText(QString::number(point));
    QVector<int>x{point5,point,point3,point4};
    QString str;
    for (int i = 0; i < x.size(); ++i)
    {
        if (i > 0)
            str += " , ";
        str += QString::number(x[i]);
    }

    ui->Display3->setText(str);
}

stage2::~stage2()
{
    delete ui;
}

void stage2::on_pushButton_5_clicked()
{
    //hide();
    Evidence2 = new evidence2(this);
    Evidence2->show();
}

void stage2::on_pushButton_3_clicked()
{
    QString l2answer1 = ui->lineEdit_3->text();

    if( l2answer1 == "CTF{Jacob}"||l2answer1 == "CTF{jacob}"){
         QMessageBox::information(this,"answer","You got it right +5 ");
         point2=point2 +5;
         ui->Display2->setText(QString::number(point2));
    }
    else {
        QMessageBox::warning(this,"answer","You got it wrong");
    }
}

void stage2::on_pushButton_clicked()
{
    QString l2answer1 = ui->lineEdit->text();

    if( l2answer1 == "CTF{James}"||l2answer1 == "CTF{james}"){
         QMessageBox::information(this,"answer","You got it right +10 ");
         point2=point2 +10;
         ui->Display2->setText(QString::number(point2));
    }
    else {
        QMessageBox::warning(this,"answer","You got it wrong");
    }
}

void stage2::on_pushButton_2_clicked()
{
    QString l2answer1 = ui->lineEdit_2->text();

    if( l2answer1 == "CTF{Lin}"||l2answer1 == "CTF{lin}"){
         QMessageBox::information(this,"answer","You got it right +15 ");
         point2=point2 +15;
         ui->Display2->setText(QString::number(point2));
    }
    else {
        QMessageBox::warning(this,"answer","You got it wrong");
    }
}

void stage2::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1){
        QMessageBox::information(this,"answer","You got it right +5 ");
        point2=point2 +5;
        ui->Display2->setText(QString::number(point2));
    }
    else{
    }
}

void stage2::on_checkBox_stateChanged(int arg1)
{
    if(arg1){
        QMessageBox::warning(this,"answer","You got it wrong");
    }
    else{
    }
}
