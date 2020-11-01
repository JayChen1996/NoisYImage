#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// OpenCV
#include <opencv2/opencv.hpp>


// STL的类
#include<memory>

// 自己的类
#include "noisytypechoosedlg.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void addnoisedlgshow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
