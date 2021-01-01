#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int number;
    void thread_count();
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_start_button_clicked();

    void on_exit_button_clicked();

    //void on_start_button_toggled(bool checked);

private:
    Ui::MainWindow *ui;
};

/*
class event_thread: public QThread
{
public:
    void thread_count();
};
*/

#endif // MAINWINDOW_H
