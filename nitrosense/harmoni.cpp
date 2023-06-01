#include "harmoni.h"
#include "ui_harmoni.h"

harmoni::harmoni(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::harmoni)
{
    ui->setupUi(this);
}

harmoni::~harmoni()
{
    delete ui;
}
