#include "howtoplay.h"
#include "ui_howtoplay.h"

howtoplay::howtoplay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::howtoplay)
{
    ui->setupUi(this);
}

howtoplay::~howtoplay()
{
    delete ui;
}
