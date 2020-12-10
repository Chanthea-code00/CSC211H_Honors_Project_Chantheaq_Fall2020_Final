#include "welcome.h"
#include "ui_welcome.h"


welcome::welcome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::welcome)
{
    ui->setupUi(this);
}

welcome::~welcome()
{
    delete ui;
}

void welcome::on_Start_accepted()
{
    hide();
    mainwindow=new MainWindow(this);
    mainwindow->show();
}
