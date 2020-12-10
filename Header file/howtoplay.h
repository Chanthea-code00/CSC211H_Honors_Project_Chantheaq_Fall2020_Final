#ifndef HOWTOPLAY_H
#define HOWTOPLAY_H

#include <QDialog>

namespace Ui {
class howtoplay;
}

class howtoplay : public QDialog
{
    Q_OBJECT

public:
    explicit howtoplay(QWidget *parent = nullptr);
    ~howtoplay();

private:
    Ui::howtoplay *ui;
};

#endif // HOWTOPLAY_H
