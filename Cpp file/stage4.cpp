#include "stage4.h"
#include "ui_stage4.h"

stage4::stage4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stage4)
{
    ui->setupUi(this);
}

stage4::~stage4()
{
    delete ui;
}
