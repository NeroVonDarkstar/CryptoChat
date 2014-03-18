#include "chat.h"
#include "ui_chat.h"
extern QString CS1_Name;

Chat::Chat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Chat)
{
    ui->setupUi(this);

    connect(ui->pushButton_Profile, SIGNAL(clicked()), SLOT(close()));
    connect(ui->pushButton_Profile, SIGNAL(clicked()), SIGNAL(showProfileWindow()));

    QPixmap pix("C:/Users/Kieran/Documents/CryptoChat/img/smiley_flat.png");
    ui->label_2->setPixmap(pix);

    QPixmap pix2("C:/Users/Kieran/Documents/CryptoChat/img/smiley_smile.png");
    ui->label_3->setPixmap(pix2);

    QPixmap pix3("C:/Users/Kieran/Documents/CryptoChat/img/smiley_big_grin.png");
    ui->label_4->setPixmap(pix3);

    QPixmap pix4("C:/Users/Kieran/Documents/CryptoChat/img/smiley_tounge.png");
    ui->label_5->setPixmap(pix4);

    QPixmap pix5("C:/Users/Kieran/Documents/CryptoChat/img/smiley_wink.png");
    ui->label_6->setPixmap(pix5);

    QPixmap pix6("C:/Users/Kieran/Documents/CryptoChat/img/smiley_frown.png");
    ui->label_7->setPixmap(pix6);

    ui->Chat_textEdit->clear();

    ui->pteMessage->setFocus();
}

Chat::~Chat()
{
    delete ui;
}




void Chat::on_pteMessage_returnPressed()
{
    QString message = ui->pteMessage->text().trimmed();
     QString user = CS1_Name;
    if(!message.isEmpty())
    {
        ui->Chat_textEdit->append("<b>" + user + "</b>: " + message);
    }

    // Clear out the input box so they can type something else:
    ui->pteMessage->clear();

    // Put the focus back into the input box so they can type again:
    ui->pteMessage->setFocus();
}


void Chat::on_btnSend_clicked()
{
    QString message = ui->pteMessage->text().trimmed();
     QString user = CS1_Name;
    if(!message.isEmpty())
    {
        ui->Chat_textEdit->append("<b>" + user + "</b>: " + message);
    }

    // Clear out the input box so they can type something else:
    ui->pteMessage->clear();

    // Put the focus back into the input box so they can type again:
    ui->pteMessage->setFocus();
}

void Chat::on_pushButton_Profile_pressed()
{
        ui->Chat_textEdit->clear();
}
