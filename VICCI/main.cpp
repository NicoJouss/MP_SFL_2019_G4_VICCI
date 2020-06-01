#include "mainwindow.h"
#include <QSqlDatabase>
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();



    QSqlDatabase db = QSqlDatabase :: addDatabase ( "QSQLITE" );
      db . setHostName ( "127.0.0.1" );
      db . setDatabaseName ( "VICCI" );
      db . setUserName ( "root" );
      db . setPassword ( "" );
      bool ok = db .open();

if(ok)
    std::cout<<" ok "<< std::endl;
    else {
    std::cout<<" pas ok "<<std:: endl;
}

    //return a.exec();
}
