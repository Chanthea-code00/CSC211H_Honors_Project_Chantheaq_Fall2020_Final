#ifndef STAGE4_H
#define STAGE4_H

#include <QDialog>

namespace Ui {
class stage4;
}

class stage4 : public QDialog
{
    Q_OBJECT

public:
    explicit stage4(QWidget *parent = nullptr);
    ~stage4();

private:
    Ui::stage4 *ui;
};

#endif // STAGE4_H
