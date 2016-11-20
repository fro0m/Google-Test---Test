//#include <iostream>
#include "qcat.h"
#include <QDebug>
//#include <QString>

int main(int , char **)
{
    QCat cat1;
    QCat cat2 = QCat();
    QCat cat3 = cat1;
    qDebug() << cat3.name() << " is the cat 3's name";
    qDebug() << "testing creating cats completed";

    return 0;
}
