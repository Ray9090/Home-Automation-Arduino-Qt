#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSerialPort>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:

    void updateRGB(QString);

    void on_red_led_off_clicked();

    void on_red_led_on_clicked();

    void on_green_led_on_clicked();

    void on_green_led_off_clicked();

    void on_blue_led_on_clicked();

    void on_green_led_off_2_clicked();

private:
    Ui::Dialog *ui;
    QSerialPort *arduino;
    static const quint16 arduino_uno_vendor_id = 9025;
    static const quint16 arduino_uno_product_id = 67;
    QString arduino_port_name;
    bool arduino_is_available;
};

#endif // DIALOG_H
