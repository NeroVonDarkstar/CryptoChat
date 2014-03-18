#ifndef CHAT_H
#define CHAT_H

#include <QMainWindow>

namespace Ui {
class Chat;
}

class Chat : public QMainWindow
{
    Q_OBJECT

signals:
    void showProfileWindow();

public:
    explicit Chat(QWidget *parent = 0);
    ~Chat();

private slots:
    void on_pushButton_Profile_clicked();

    void on_label_2_linkActivated(const QString &link);

    void on_pushButton_clicked();

    void on_pteMessage_returnPressed();

    void on_btnSend_clicked();

    void on_pushButton_Profile_pressed();

private:
    Ui::Chat *ui;
};

#endif // CHAT_H
