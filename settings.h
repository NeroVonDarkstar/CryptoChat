#ifndef SETTINGS_H
#define SETTINGS_H

#include <QMainWindow>
#include <sys/types.h>

namespace Ui {
class Settings;
}

class Settings : public QMainWindow
{
    Q_OBJECT

signals:
    void showChatWindow();
    void showProfileWindow();

public:
    explicit Settings(QWidget *parent = 0);
    ~Settings();


private slots:
    void on_pushButton_Profile_clicked();
    void on_pushButton_chat_clicked();

private:
    Ui::Settings *ui;

};

#endif // SETTINGS_H
