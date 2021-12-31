#include <QCoreApplication>
#include"csvt.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    csvt csvr;
  std::vector<std::vector<float> > f=  csvr.getcsvdata();

    csvr.FirFilter(f);

  return a.exec();




}
