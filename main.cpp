#include "jump.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Jump w;
    w.show();

    return a.exec();
}
