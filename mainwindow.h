#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// OpenCV
#include <opencv2/opencv.hpp>


// STL的类
#include<memory>

// 自己的类
#include "noisytypechoosedlg.h"

// Qt
#include <QMainWindow>
#include <QFileDialog>
#include <QString>
#include <QImage>
#include <QPixmap>
#include <QGraphicsScene>


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
    void openImage();

private:
    Ui::MainWindow *ui;
    QImage img;
    QPixmap pixmp;
    QGraphicsScene mscene;
};

#endif // MAINWINDOW_H
