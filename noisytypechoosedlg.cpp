#include "noisytypechoosedlg.h"
#include "ui_noisytypechoosedlg.h"

NoisyTypeChooseDlg::NoisyTypeChooseDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NoisyTypeChooseDlg)
{
    ui->setupUi(this);
}

NoisyTypeChooseDlg::~NoisyTypeChooseDlg()
{
    delete ui;
}
