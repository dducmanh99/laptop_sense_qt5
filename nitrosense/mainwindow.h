#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void timer_timeout();

    void on_keyboard_clicked();

    void on_pushButton_clicked();

    void on_bell_clicked();

    void on_setting_clicked();

    void on_coolboost_toggled(bool checked);

    void on_fan_auto_clicked();

    void on_fan_max_clicked();

    void on_fan_custom_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_8_toggled(bool checked);

    void on_pushButton_10_toggled(bool checked);

    void on_pushButton_12_toggled(bool checked);

    void on_pushButton_15_toggled(bool checked);

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_cpu_cus_valueChanged(int value);

    void on_gpu_cus_valueChanged(int value);

    void on_pushButton_16_clicked();

    void on_x_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
