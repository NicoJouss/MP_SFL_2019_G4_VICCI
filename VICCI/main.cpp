#include "mainwindow.h"
#include <QSqlDatabase>
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

 /*   QSqlDatabase db = QSqlDatabase :: addDatabase ( "QMYSQL" );
      db.setHostName ( "217.128.90.45" );
      db.setDatabaseName ( "meteo" );
      db.setUserName ( "etu_meteo" );
      db.setPassword ( "Nante44" );
      bool ok = db.open();


    if(ok)
        std::cout<<" ok "<< std::endl;
    else {
        std::cout<<" pas ok "<<std:: endl;
    }
    */

    return a.exec();
}
