#include "evidence2.h"
#include "ui_evidence2.h"

evidence2::evidence2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::evidence2)
{
    ui->setupUi(this);
}

evidence2::~evidence2()
{
    delete ui;
}
