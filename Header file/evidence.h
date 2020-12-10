#ifndef EVIDENCE_H
#define EVIDENCE_H

#include <QDialog>

namespace Ui {
class evidence;
}

class evidence : public QDialog
{
    Q_OBJECT

public:
    explicit evidence(QWidget *parent = nullptr);
    ~evidence();

private:
    Ui::evidence *ui;
};

#endif // EVIDENCE_H
