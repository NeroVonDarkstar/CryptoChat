#ifndef ABOUT_H
#define ABOUT_H

#include <QMainWindow>

namespace Ui {
class About;
}

class About : public QMainWindow
{
    Q_OBJECT

public:
    explicit About(QWidget *parent = 0);
    ~About();
signals:
    void hideAboutWindow();
    void showLoginWindow2();

private:
    Ui::About *ui;
};

#endif // ABOUT_H
