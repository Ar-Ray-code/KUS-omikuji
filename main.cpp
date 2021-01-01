#include "mainwindow.h"

#include <thread>
#include <QApplication>
#include <iostream>
#include <string>
#include <thread>
#include <unistd.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    return a.exec();
}
