#ifndef EVIDENCE2_H
#define EVIDENCE2_H

#include <QDialog>

namespace Ui {
class evidence2;
}

class evidence2 : public QDialog
{
    Q_OBJECT

public:
    explicit evidence2(QWidget *parent = nullptr);
    ~evidence2();

private:
    Ui::evidence2 *ui;
};

#endif // EVIDENCE2_H
