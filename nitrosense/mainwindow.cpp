
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "keybroad.h"
#include "harmoni.h"
#include "notifiacation.h"
#include "setting.h"
#include <QTimer>

QTimer *timer;
int tem = 65;
int tem1=4000;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->coolboost->setCheckable(true);
    ui->pushButton_8->setCheckable(true);
    ui->pushButton_10->setCheckable(true);
    ui->pushButton_12->setCheckable(true);
    ui->pushButton_15->setCheckable(true);
    ui->cpu_cus->setValue(2238);
    ui->gpu_cus->setValue(2462);
    ui->pushButton_6->setStyleSheet("");ui->pushButton_22->setStyleSheet("");ui->pushButton_23->setStyleSheet("");ui->pushButton_24->setStyleSheet("");
    ui->pushButton_25->setStyleSheet("");ui->pushButton_26->setStyleSheet("");ui->pushButton_27->setStyleSheet("");ui->pushButton_28->setStyleSheet("");
    ui->pushButton_29->setStyleSheet("");ui->pushButton_30->setStyleSheet("");ui->pushButton_31->setStyleSheet("");ui->pushButton_32->setStyleSheet("");
    ui->pushButton_33->setStyleSheet("");ui->pushButton_34->setStyleSheet("");ui->pushButton_35->setStyleSheet("");ui->pushButton_36->setStyleSheet("");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_keyboard_clicked()
{
    keybroad keybroad;
    keybroad.setModal(true);
    keybroad.exec();

}

void MainWindow::on_pushButton_clicked()
{
    harmoni harmoni;
    harmoni.setModal(true);
    harmoni.exec();
}

void MainWindow::on_bell_clicked()
{
    notifiacation notifiacation;
    notifiacation.setModal(true);
    notifiacation.exec();
}

void MainWindow::on_setting_clicked()
{
    setting setting;
    setting.setModal(true);
    setting.exec();
}


void MainWindow::on_coolboost_toggled(bool checked)
{
    if(checked)
    {
        ui->coolboost->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/toggle-right.svg"));
        ui->coolboost->setStyleSheet("border :3px solid red");
    }
    else
    {
        ui->coolboost->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/toggle-left.svg"));
        ui->coolboost->setStyleSheet("border :none");
    }
}

void MainWindow::on_fan_auto_clicked()
{
    ui->cpu_rpm->setText("2238");
    ui->cpu_temp->setText("53");
    ui->cpu_load->setText("4");

    ui->gpu_rpm->setText("2462");
    ui->gpu_temp->setText("--");
    ui->gpu_load->setText("--");
    ui->cpu_cus->setDisabled(true);
    ui->gpu_cus->setDisabled(true);
    ui->fan_auto->setStyleSheet("border :3px solid red");
    ui->fan_max->setStyleSheet("border :none");
    ui->fan_custom->setStyleSheet("border :none");

}

void MainWindow::on_fan_max_clicked()
{
    ui->cpu_rpm->setText("5000");
    ui->cpu_temp->setText("49");
    ui->cpu_load->setText("4");

    ui->gpu_rpm->setText("5769");
    ui->gpu_temp->setText("--");
    ui->gpu_load->setText("--");
    ui->cpu_cus->setDisabled(true);
    ui->gpu_cus->setDisabled(true);
    ui->fan_max->setStyleSheet("border :3px solid red");
    ui->fan_auto->setStyleSheet("border :none");
    ui->fan_custom->setStyleSheet("border :none");
}

void MainWindow::on_fan_custom_clicked()
{
    ui->cpu_rpm->setText("2238");
    ui->cpu_temp->setText("53");
    ui->cpu_load->setText("4");

    ui->gpu_rpm->setText("2462");
    ui->gpu_temp->setText("--");
    ui->gpu_load->setText("--");

    ui->cpu_cus->setEnabled(true);
    ui->gpu_cus->setEnabled(true);

    ui->fan_custom->setStyleSheet("border :3px solid red");
    ui->fan_auto->setStyleSheet("border :none");
    ui->fan_max->setStyleSheet("border :none");
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->label_8->setStyleSheet("border :3px solid red");
    ui->label_9->setStyleSheet("border :none");
    ui->label_10->setStyleSheet("border :none");
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->label_9->setStyleSheet("border :3px solid red");
    ui->label_8->setStyleSheet("border :none");
    ui->label_10->setStyleSheet("border :none");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->label_10->setStyleSheet("border :3px solid red");
    ui->label_9->setStyleSheet("border :none");
    ui->label_8->setStyleSheet("border :none");
}

void MainWindow::on_pushButton_8_toggled(bool checked)
{
    if(checked)
    {
        ui->pushButton_8->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/toggle-right.svg"));
        ui->pushButton_8->setStyleSheet("border :3px solid red");
        ui->pushButton_9->setStyleSheet("background:purple");
        ui->pushButton_6->setStyleSheet("background:red");ui->pushButton_22->setStyleSheet("background:yellow");ui->pushButton_23->setStyleSheet("background:green");ui->pushButton_24->setStyleSheet("background:blue");
    }
    else
    {
        ui->pushButton_8->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/toggle-left.svg"));
        ui->pushButton_8->setStyleSheet("border :none");
        ui->pushButton_9->setStyleSheet("");
        ui->pushButton_6->setStyleSheet("");ui->pushButton_22->setStyleSheet("");ui->pushButton_23->setStyleSheet("");ui->pushButton_24->setStyleSheet("");

    }
}

void MainWindow::on_pushButton_10_toggled(bool checked)
{
    if(checked)
    {
        ui->pushButton_10->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/toggle-right.svg"));
        ui->pushButton_10->setStyleSheet("border :3px solid red");
        ui->pushButton_11->setStyleSheet("background:yellow");
        ui->pushButton_25->setStyleSheet("background:red");ui->pushButton_26->setStyleSheet("background:green");ui->pushButton_27->setStyleSheet("background:blue");ui->pushButton_28->setStyleSheet("background:purple");
    }
    else
    {
        ui->pushButton_10->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/toggle-left.svg"));
        ui->pushButton_10->setStyleSheet("border :none");
        ui->pushButton_11->setStyleSheet("");
        ui->pushButton_25->setStyleSheet("");ui->pushButton_26->setStyleSheet("");ui->pushButton_27->setStyleSheet("");ui->pushButton_28->setStyleSheet("");

    }
}

void MainWindow::on_pushButton_12_toggled(bool checked)
{
    if(checked)
    {
        ui->pushButton_12->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/toggle-right.svg"));
        ui->pushButton_12->setStyleSheet("border :3px solid red");
        ui->pushButton_13->setStyleSheet("background:green");
        ui->pushButton_29->setStyleSheet("background:red");ui->pushButton_30->setStyleSheet("background:yellow");ui->pushButton_31->setStyleSheet("background:blue");ui->pushButton_32->setStyleSheet("background:purple");
    }
    else
    {
        ui->pushButton_12->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/toggle-left.svg"));
        ui->pushButton_12->setStyleSheet("border :none");
        ui->pushButton_13->setStyleSheet("");
        ui->pushButton_29->setStyleSheet("");ui->pushButton_30->setStyleSheet("");ui->pushButton_31->setStyleSheet("");ui->pushButton_32->setStyleSheet("");
    }
}

void MainWindow::on_pushButton_15_toggled(bool checked)
{
    if(checked)
    {
        ui->pushButton_15->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/toggle-right.svg"));
        ui->pushButton_15->setStyleSheet("border :3px solid red");
        ui->pushButton_14->setStyleSheet("background:red");
        ui->pushButton_33->setStyleSheet("background:yellow");ui->pushButton_34->setStyleSheet("background:green");ui->pushButton_35->setStyleSheet("background:blue");ui->pushButton_36->setStyleSheet("background:purple");
    }
    else
    {
        ui->pushButton_15->setIcon(QIcon("D:/C/uet_3_2/tuong tac/library/toggle-left.svg"));
        ui->pushButton_15->setStyleSheet("border :none");
        ui->pushButton_14->setStyleSheet("");
        ui->pushButton_33->setStyleSheet("");ui->pushButton_34->setStyleSheet("");ui->pushButton_35->setStyleSheet("");ui->pushButton_36->setStyleSheet("");

    }
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->pushButton_18->setStyleSheet("border :2px solid red");
    ui->pushButton_19->setStyleSheet("border :none");
}

void MainWindow::on_pushButton_19_clicked()
{
    ui->pushButton_19->setStyleSheet("border :2px solid red");
    ui->pushButton_18->setStyleSheet("border :none");
}

void MainWindow::on_cpu_cus_valueChanged(int value)
{
    ui->cpu_rpm->setText(QString::number(value));
    ui->cpu_cus->setMaximum(5000);
    ui->cpu_cus->setMinimum(1800);

}


void MainWindow::on_gpu_cus_valueChanged(int value)
{
    ui->gpu_rpm->setText(QString::number(value));
    ui->gpu_cus->setMaximum(5000);
    ui->gpu_cus->setMinimum(1800);

}

void MainWindow::on_pushButton_16_clicked()
{
    ui->cpu_temp->setText("65");
    ui->cpu_load->setText("40");
    for(int i=2238;i<=4000; i++){
        QString str;
        str=QString::number(i);
        ui->cpu_rpm->setText(str);
    }
    timer = new QTimer(this);
    timer->setInterval(500);
    connect(timer,SIGNAL(timeout()),this,SLOT(timer_timeout()));
    timer->start();

}

void MainWindow::timer_timeout()
{
    if(tem>40)
    {
        tem=tem-3;
        tem1=tem1-100;
    }
    QString str1;
    QString str2;
    str1=QString::number(tem);
    str2=QString::number(tem1);
    ui->cpu_temp->setText(str1);
    ui->cpu_rpm->setText(str2);

}

void MainWindow::on_x_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_24_clicked()
{
    ui->pushButton_9->setStyleSheet("background:blue");
    ui->pushButton_24->setStyleSheet("background:purple");
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->pushButton_9->setStyleSheet("background:red");
    ui->pushButton_6->setStyleSheet("background:blue");
}
