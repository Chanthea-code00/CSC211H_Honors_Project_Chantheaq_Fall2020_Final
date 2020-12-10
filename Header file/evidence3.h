#ifndef EVIDENCE3_H
#define EVIDENCE3_H

#include <QDialog>

namespace Ui {
class evidence3;
}

class evidence3 : public QDialog
{
    Q_OBJECT

public:
    explicit evidence3(QWidget *parent = nullptr);
    ~evidence3();

private:
    Ui::evidence3 *ui;
};

#endif // EVIDENCE3_H
