#include "numtransdlg.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    numtransdlg w;
    w.show();
    return QApplication::exec();
}
