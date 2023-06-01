#include "notifiacation.h"
#include "ui_notifiacation.h"

notifiacation::notifiacation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::notifiacation)
{
    ui->setupUi(this);
    ui->mute_all->setCheckable(true);
    ui->zalo_mute->setCheckable(true);
    ui->mess_mute->setCheckable(true);
}

notifiacation::~notifiacation()
{
    delete ui;
}

void notifiacation::on_mute_all_toggled(bool checked)
{
    if(checked)
    {
        ui->mute_all->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/bell-off.svg"));
        ui->zalo_mute->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/bell-off.svg"));
        ui->mess_mute->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/bell-off.svg"));
        ui->insta_mute->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/bell-off.svg"));
        ui->chorm_mute->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/bell-off.svg"));
    }
    else
    {
        ui->mute_all->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/bell.svg"));
        ui->zalo_mute->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/bell.svg"));
        ui->mess_mute->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/bell.svg"));
        ui->insta_mute->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/bell.svg"));
        ui->chorm_mute->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/bell.svg"));
    }
}

void notifiacation::on_zalo_mute_toggled(bool checked)
{
    if(checked)
    {
        ui->zalo_mute->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/bell-off.svg"));
    }
    else
    {
        ui->zalo_mute->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/bell.svg"));
    }
}

void notifiacation::on_mess_mute_toggled(bool checked)
{
    if(checked)
    {
        ui->mess_mute->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/bell-off.svg"));
    }
    else
    {
        ui->mess_mute->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/bell.svg"));
    }
}
