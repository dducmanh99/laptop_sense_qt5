#ifndef NOTIFIACATION_H
#define NOTIFIACATION_H

#include <QDialog>

namespace Ui {
class notifiacation;
}

class notifiacation : public QDialog
{
    Q_OBJECT

public:
    explicit notifiacation(QWidget *parent = 0);
    ~notifiacation();

private slots:
    void on_mute_all_toggled(bool checked);

    void on_zalo_mute_toggled(bool checked);

    void on_mess_mute_toggled(bool checked);

private:
    Ui::notifiacation *ui;
};

#endif // NOTIFIACATION_H
