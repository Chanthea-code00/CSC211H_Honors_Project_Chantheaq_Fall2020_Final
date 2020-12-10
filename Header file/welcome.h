#ifndef WELCOME_H
#define WELCOME_H
#include "mainwindow.h"

#include <QDialog>

namespace Ui {
class welcome;
}

class welcome : public QDialog
{
    Q_OBJECT

public:
    explicit welcome(QWidget *parent = nullptr);
    ~welcome();

private slots:
    void on_Start_accepted();

private:
    Ui::welcome *ui;
    MainWindow *mainwindow;
};

#endif // WELCOME_H
