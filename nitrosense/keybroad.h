#ifndef KEYBROAD_H
#define KEYBROAD_H

#include <QDialog>

namespace Ui {
class keybroad;
}

class keybroad : public QDialog
{
    Q_OBJECT

public:
    explicit keybroad(QWidget *parent = 0);
    ~keybroad();

private:
    Ui::keybroad *ui;
};

#endif // KEYBROAD_H
