#ifndef EVIDENCE1_H
#define EVIDENCE1_H

#include <QDialog>

namespace Ui {
class evidence1;
}

class evidence1 : public QDialog
{
    Q_OBJECT

public:
    explicit evidence1(QWidget *parent = nullptr);
    ~evidence1();

private:
    Ui::evidence1 *ui;
};

#endif // EVIDENCE1_H
