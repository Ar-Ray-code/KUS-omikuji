#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <unistd.h>
#include <iostream>
#include <stdlib.h>
#include <thread>

#define MAX_COUNT 15


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->omikuji->clear();
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::thread_count()
{
    QPixmap pMap;
    QImage *mImage = new QImage();
    number = 0;
    std::string path;
    unsigned int microsecond = 1000000;
    while(1)
    {
        number++;
        if(number == MAX_COUNT)
            number = 1;

        ui->omikuji->clear();
        ui->omikuji->lower();

        switch(number){
        case 1: ui->omikuji->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/omikuji_result/1.png\"/></p></body></html>", Q_NULLPTR));  break;
        case 2: ui->omikuji->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/omikuji_result/2.png\"/></p></body></html>", Q_NULLPTR));  break;
        case 3: ui->omikuji->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/omikuji_result/3.png\"/></p></body></html>", Q_NULLPTR));  break;
        case 4: ui->omikuji->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/omikuji_result/4.png\"/></p></body></html>", Q_NULLPTR));  break;
        case 5: ui->omikuji->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/omikuji_result/5.png\"/></p></body></html>", Q_NULLPTR));  break;
        case 6: ui->omikuji->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/omikuji_result/6.png\"/></p></body></html>", Q_NULLPTR));  break;
        case 7: ui->omikuji->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/omikuji_result/7.png\"/></p></body></html>", Q_NULLPTR));  break;
        case 8: ui->omikuji->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/omikuji_result/8.png\"/></p></body></html>", Q_NULLPTR));  break;
        case 9: ui->omikuji->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/omikuji_result/9.png\"/></p></body></html>", Q_NULLPTR));  break;
        case 10: ui->omikuji->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/omikuji_result/10.png\"/></p></body></html>", Q_NULLPTR));  break;
        case 11: ui->omikuji->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/omikuji_result/11.png\"/></p></body></html>", Q_NULLPTR));  break;
        case 12: ui->omikuji->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/omikuji_result/12.png\"/></p></body></html>", Q_NULLPTR));  break;
        case 13: ui->omikuji->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/omikuji_result/13.png\"/></p></body></html>", Q_NULLPTR));  break;
        case 14: ui->omikuji->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/omikuji_result/14.png\"/></p></body></html>", Q_NULLPTR));  break;
        case 15: ui->omikuji->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/newPrefix/omikuji_result/15.png\"/></p></body></html>", Q_NULLPTR));  break;
        default: break;
        }
        this->repaint();
        this->update();
        QApplication::processEvents();
        usleep(0.001*microsecond);
    }
}

void MainWindow::on_start_button_clicked()
{
    thread_count();
}

void MainWindow::on_exit_button_clicked()
{
    exit(0);
}
