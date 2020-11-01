#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// OpenCV
#include <opencv2/opencv.hpp>


// STL����
#include<memory>

// �Լ�����
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
