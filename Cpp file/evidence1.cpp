#include "evidence1.h"
#include "ui_evidence1.h"

evidence1::evidence1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::evidence1)
{
    ui->setupUi(this);
}

evidence1::~evidence1()
{
    delete ui;
}
