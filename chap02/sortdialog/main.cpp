#include "sortdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sortdialog w;
    w.setColumnRange('C', 'E');
    w.show();

    return a.exec();
}
