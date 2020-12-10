#ifndef STAGE2_H
#define STAGE2_H
#include"evidence2.h"

#include <QDialog>

namespace Ui {
class stage2;
}

class stage2 : public QDialog
{
    Q_OBJECT

public:
    explicit stage2(QWidget *parent = nullptr);
    ~stage2();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::stage2 *ui;
    evidence2 *Evidence2;
};

#endif // STAGE2_H
