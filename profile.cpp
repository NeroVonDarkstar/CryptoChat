#include "profile.h"
#include "ui_profile.h"
#include <string>
extern QString CS1_Name;

Profile::Profile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);

    QPixmap UserProfilePix("C:\\img\\damon.png");
    ui->lbl_ProfilePic->setPixmap(UserProfilePix);

    QPixmap Slot1Pix("C:\\img\\david.png");
    ui->lbl_FirstContactSlot->setPixmap(Slot1Pix);

    QPixmap Slot2Pix("C:\\img\\dom.png");
    ui->lbl_SecondContactSlot->setPixmap(Slot2Pix);

    QPixmap Slot3Pix("C:\\img\\trevor.png");
    ui->lbl_ThirdContactSlot->setPixmap(Slot3Pix);

    QPixmap Slot4Pix("C:\\img\\jesse.png");
    ui->lbl_FourthContactSlot->setPixmap(Slot4Pix);

    connect(ui->pushButton_SignOut, SIGNAL(clicked()), SLOT(hide()));
    connect(ui->pushButton_SignOut, SIGNAL(clicked()), SIGNAL(showLoginWindow()));

    connect(ui->pushButton_AdvancedSettings, SIGNAL(clicked()), SLOT(hide()));
    connect(ui->pushButton_AdvancedSettings, SIGNAL(clicked()), SIGNAL(showSettingsWindow()));

    connect(ui->button_changePass, SIGNAL(clicked()), SIGNAL(showChangePassWindow()));

    connect(ui->btn_changepicture, SIGNAL(clicked()), SIGNAL(showChangePictureWindow()));

    connect(ui->btn_addContact, SIGNAL(clicked()), SIGNAL(showNewContactWindow()));

    connect(ui->pushButton_CS1, SIGNAL(clicked()), SLOT(hide()));
    connect(ui->pushButton_CS1, SIGNAL(clicked()), SIGNAL(showChatWindow()));

    connect(ui->pushButton_CS2, SIGNAL(clicked()), SLOT(hide()));
    connect(ui->pushButton_CS2, SIGNAL(clicked()), SIGNAL(showChatWindow()));


}

Profile::~Profile()
{
    delete ui;
}





void Profile::on_pushButton_clicked()
{
    QString set1[3];
        set1[0] = "Leo Messi";
        set1[1] = "2014 BoD FTW!";
        set1[2] = "10:33am";

    QString set2[3];
            set2[0] = "Wenger";
            set2[1] = "Needs some trophies";
            set2[2] = "09:3pm";

    QString set3[3];
                set3[0] = "Moyes";
                set3[1] = "Let me win.";
                set3[2] = "7:33pm";

    QString set4[3];
                set4[0] = "Ribery";
                set4[1] = "I should've won it!";
                set4[2] = "5:15pm";

    ui->CS1_Name_label->setText(set1[0]);
    ui->CS1_LastMess_label  ->setText(set1[1]);
    ui->CS1_LastSeen_label  ->setText("Last seen: " + set1[2]);

    ui->CS2_Name_label->setText(set2[0]);
    ui->CS2_LastMess_label  ->setText(set2[1]);
    ui->CS2_LastSeen_label  ->setText("Last seen: " + set2[2]);

    ui->CS3_Name_label->setText(set3[0]);
    ui->CS3_LastMess_label  ->setText(set3[1]);
    ui->CS3_LastSeen_label  ->setText("Last seen: " + set3[2]);

    ui->CS4_Name_label->setText(set4[0]);
    ui->CS4_LastMess_label  ->setText(set4[1]);
    ui->CS4_LastSeen_label  ->setText("Last seen: " + set4[2]);


    QPixmap pix2("C:\\img\\messi.png");
    ui->lbl_FirstContactSlot->setPixmap(pix2);

    QPixmap pix3("C:\\img\\wenger.png");
    ui->lbl_SecondContactSlot->setPixmap(pix3);

    QPixmap pix4("C:\\img\\moyes.png");
    ui->lbl_ThirdContactSlot->setPixmap(pix4);

    QPixmap pix5("C:\\img\\ribery.png");
    ui->lbl_FourthContactSlot->setPixmap(pix5);
}

void Profile::on_Prev_pushButton_clicked()
{
    QString set1[3];
        set1[0] = "David Berry";
        set1[1] = "Going to Costa!";
        set1[2] = "8:19am";

    QString set2[3];
            set2[0] = "Dom Santiago";
            set2[1] = "Shooting the Locust";
            set2[2] = "12:19pm";

    QString set3[3];
                set3[0] = "Trevor";
                set3[1] = "Riding my Bike.";
                set3[2] = "7:55am";

    QString set4[3];
                set4[0] = "Jesse";
                set4[1] = "It's Science !";
                set4[2] = "2:10am";

                QPixmap pix2("C:\\img\\david.png");
                ui->lbl_FirstContactSlot->setPixmap(pix2);

                QPixmap pix3("C:\\img\\dom.png");
                ui->lbl_SecondContactSlot->setPixmap(pix3);

                QPixmap pix4("C:\\img\\trevor.png");
                ui->lbl_ThirdContactSlot->setPixmap(pix4);

                QPixmap pix5("C:\\img\\jesse.png");
                ui->lbl_FourthContactSlot->setPixmap(pix5);

    ui->CS1_Name_label->setText(set1[0]);
    ui->CS1_LastMess_label  ->setText(set1[1]);
    ui->CS1_LastSeen_label  ->setText("Last seen: " + set1[2]);

    ui->CS2_Name_label->setText(set2[0]);
    ui->CS2_LastMess_label  ->setText(set2[1]);
    ui->CS2_LastSeen_label  ->setText("Last seen: " + set2[2]);

    ui->CS3_Name_label->setText(set3[0]);
    ui->CS3_LastMess_label  ->setText(set3[1]);
    ui->CS3_LastSeen_label  ->setText("Last seen: " + set3[2]);

    ui->CS4_Name_label->setText(set4[0]);
    ui->CS4_LastMess_label  ->setText(set4[1]);
    ui->CS4_LastSeen_label  ->setText("Last seen: " + set4[2]);
}

void Profile::on_pushButton_CS1_pressed()
{
    CS1_Name = "David Berry";
}

void Profile::on_pushButton_CS2_pressed()
{
    CS1_Name = "Dom Santiago";
}
