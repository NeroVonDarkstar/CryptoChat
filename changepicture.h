#ifndef CHANGEPICTURE_H
#define CHANGEPICTURE_H

#include <QMainWindow>

namespace Ui {
class changePicture;
}

class changePicture : public QMainWindow
{
    Q_OBJECT

public:
    explicit changePicture(QWidget *parent = 0);
    ~changePicture();

signals:
    void hideChangePictureWindow();

private:
    Ui::changePicture *ui;
};

#endif // CHANGEPICTURE_H
