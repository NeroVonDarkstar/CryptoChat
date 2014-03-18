#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>


namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

signals:
    void showProfileWindow();
    void showAboutWindow();

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_SignIn_pushButton_clicked();
    void on_Login_Exit_pushButton_clicked();

private:
    Ui::Login *ui;

};

#endif // LOGIN_H
