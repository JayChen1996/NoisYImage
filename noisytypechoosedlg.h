#ifndef NOISYTYPECHOOSEDLG_H
#define NOISYTYPECHOOSEDLG_H

#include <QDialog>

namespace Ui {
class NoisyTypeChooseDlg;
}

class NoisyTypeChooseDlg : public QDialog
{
    Q_OBJECT

public:
    explicit NoisyTypeChooseDlg(QWidget *parent = nullptr);
    ~NoisyTypeChooseDlg();

private:
    Ui::NoisyTypeChooseDlg *ui;
};

#endif // NOISYTYPECHOOSEDLG_H
