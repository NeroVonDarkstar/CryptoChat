#ifndef PROFILE_H
#define PROFILE_H

#include <QMainWindow>
#include <sys/types.h>

namespace Ui {
class Profile;
}

class Profile : public QMainWindow
{
    Q_OBJECT

signals:
    void showSettingsWindow();
    void showLoginWindow();
    void showChangePassWindow();
    void showChangePictureWindow();
    void showNewContactWindow();
    void showChatWindow();

public:
    explicit Profile(QWidget *parent = 0);
    ~Profile();

private slots:
    void on_pushButton_SignOut_clicked();
    void on_pushButton_clicked();
    void on_Prev_pushButton_clicked();
    void on_pushButton_AdvancedSettings_clicked();

    void on_pushButton_CS1_pressed();

    void on_pushButton_CS2_pressed();

private:
    Ui::Profile *ui;

};

#endif // PROFILE_H
