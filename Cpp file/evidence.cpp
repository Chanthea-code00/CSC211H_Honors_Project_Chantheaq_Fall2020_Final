#include "evidence.h"
#include "ui_evidence.h"

evidence::evidence(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::evidence)
{
    ui->setupUi(this);
}

evidence::~evidence()
{
    delete ui;
}
