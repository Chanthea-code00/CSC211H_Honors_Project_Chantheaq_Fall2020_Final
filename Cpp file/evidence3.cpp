#include "evidence3.h"
#include "ui_evidence3.h"

evidence3::evidence3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::evidence3)
{
    ui->setupUi(this);
}

evidence3::~evidence3()
{
    delete ui;
}
