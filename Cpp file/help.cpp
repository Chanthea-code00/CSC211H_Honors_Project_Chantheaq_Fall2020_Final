#include "help.h"
#include "ui_help.h"
#include "QMessageBox"
#include <QFile>
#include <QTextStream>

help::help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::help)
{
    ui->setupUi(this);
}

help::~help()
{
    delete ui;
}

void help::on_pushButton_clicked()
{

    QFile file("$/Users/chantheaquinland/build-cyber-Desktop_Qt_5_15_1_clang_64bit-Debug/Help.txt");// writes to file from messsage written by use
        if(!file.open(QFile::WriteOnly | QFile::Text)){
          QMessageBox::information(this,"submit","Messaged submitted successfully");// alerts user message was submitted

        }
        QTextStream out(&file);
        QString text = ui->plainTextEdit->toPlainText();
        out<<text;
        file.flush();// empty file after
        file.close();
}
