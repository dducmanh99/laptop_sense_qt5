#include "keybroad.h"
#include "ui_keybroad.h"

keybroad::keybroad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::keybroad)
{
    ui->setupUi(this);
}

keybroad::~keybroad()
{
    delete ui;
}
