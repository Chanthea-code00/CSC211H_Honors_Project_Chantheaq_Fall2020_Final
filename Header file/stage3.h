#ifndef STAGE3_H
#define STAGE3_H
#include "evidence3.h"

#include <QDialog>

namespace Ui {
class stage3;
}

class stage3 : public QDialog
{
    Q_OBJECT

public:
    explicit stage3(QWidget *parent = nullptr);
    ~stage3();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

private:
    Ui::stage3 *ui;
    evidence3 *Evidence3;
};

#endif // STAGE3_H
