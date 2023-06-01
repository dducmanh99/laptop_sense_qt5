#include "setting.h"
#include "ui_setting.h"

setting::setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setting)
{
    ui->setupUi(this);
    ui->pushButton1->setCheckable(true);
    ui->pushButton2->setCheckable(true);
}

setting::~setting()
{
    delete ui;
}

void setting::on_pushButton1_toggled(bool checked)
{
    if(checked)
    {
        ui->pushButton1->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/toggle-right.svg"));
    }
    else
    {
        ui->pushButton1->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/toggle-left.svg"));
    }
}

void setting::on_pushButton2_toggled(bool checked)
{
    if(checked)
    {
        ui->pushButton2->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/toggle-right.svg"));
    }
    else
    {
        ui->pushButton2->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/toggle-left.svg"));
    }
}
