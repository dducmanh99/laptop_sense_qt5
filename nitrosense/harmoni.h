#ifndef HARMONI_H
#define HARMONI_H

#include <QDialog>

namespace Ui {
class harmoni;
}

class harmoni : public QDialog
{
    Q_OBJECT

public:
    explicit harmoni(QWidget *parent = 0);
    ~harmoni();

private:
    Ui::harmoni *ui;
};

#endif // HARMONI_H
