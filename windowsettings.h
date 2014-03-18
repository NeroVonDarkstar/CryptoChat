#ifndef WINDOWSETTINGS_H
#define WINDOWSETTINGS_H

#include <QMainWindow>
#include <windowchat.h>

namespace Ui {
class WindowSettings;
}

class WindowSettings : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowSettings(QWidget *parent = 0);
    ~WindowSettings();

public slots: // HERE
void openChat(); //make a new function to call the window

protected:
void changeEvent(QEvent *e);

private:
    Ui::WindowSettings *ui;
    WindowChat *winChat; //make a new declaration for the new window HERE

private slots: // HERE
void on_pushButton_2_clicked();
void on_pushButton_clicked();

};

#endif // MAINWINDOW_H
