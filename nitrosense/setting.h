#ifndef SETTING_H
#define SETTING_H

#include <QDialog>

namespace Ui {
class setting;
}

class setting : public QDialog
{
    Q_OBJECT

public:
    explicit setting(QWidget *parent = 0);
    ~setting();

private slots:
    void on_pushButton1_toggled(bool checked);

    void on_pushButton2_toggled(bool checked);

private:
    Ui::setting *ui;
};

#endif // SETTING_H
