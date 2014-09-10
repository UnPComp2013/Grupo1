#include "projeto.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Projeto w;
    w.show();

    return a.exec();
}
