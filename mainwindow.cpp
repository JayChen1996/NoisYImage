#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&mscene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addnoisedlgshow()
{
    std::shared_ptr<NoisyTypeChooseDlg> shdPtrNoisytp(new NoisyTypeChooseDlg());

    shdPtrNoisytp->show();
}

void MainWindow::openImage()
{
    // 打开文件窗口，得到一个图片的路径
    QString fileName = QFileDialog::getOpenFileName(
        this,
        tr("Open Image"),
        "",
        tr("Image Files(*.png *.jpg *.bmp)")
    );
    img.load(fileName);
    pixmp = QPixmap::fromImage(img);
    mscene.addPixmap(pixmp);
    //mscene.addText("hello world");
    // ui->graphicsView->resize(pixmp.width() + 10, pixmp.height() + 10);
    ui->graphicsView->show();
}























