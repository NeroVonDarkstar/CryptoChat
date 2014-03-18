#ifndef CHANGEPASS_H
#define CHANGEPASS_H

#include <QMainWindow>

namespace Ui {
class changePass;
}

class changePass : public QMainWindow
{
    Q_OBJECT

public:
    explicit changePass(QWidget *parent = 0);
    ~changePass();
signals:
    void hideChangePassWindow();

private:
    Ui::changePass *ui;
};

#endif // CHANGEPASS_H
