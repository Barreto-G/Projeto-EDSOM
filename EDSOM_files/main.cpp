#include "fm_principal.h"
#include<QtSql>
#include <QApplication>
#include<QMessageBox>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    fm_principal w;
    w.show();

    return a.exec();
}
