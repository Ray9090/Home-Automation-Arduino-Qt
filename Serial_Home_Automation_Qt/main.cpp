#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.setFixedSize(606, 260);
    w.setWindowTitle("LED Controller");
    w.show();

    return a.exec();
}
