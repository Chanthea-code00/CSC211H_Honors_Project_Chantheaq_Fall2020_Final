#ifndef STAGE1_H
#define STAGE1_H
#include "evidence.h"
#include <QDialog>


namespace Ui {
class stage1;
}

class stage1 : public QDialog
{
    Q_OBJECT

public:
    explicit stage1(QWidget *parent = nullptr);
    ~stage1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();


    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

private:
    Ui::stage1 *ui;
    evidence *Evidence;

};

#endif // STAGE1_H
