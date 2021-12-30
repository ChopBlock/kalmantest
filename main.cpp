#include <QCoreApplication>
#include"csvt.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    csvt csvr;
    csvr.getcsvdata();
    return a.exec();
}
