#include "login.h"
#include "ui_login.h"


Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QPixmap logoPix("C:\\img\\logosmall.png");
    ui->logo_Label->setPixmap(logoPix);

    connect(ui->SignIn_pushButton, SIGNAL(clicked()), SLOT(hide()));
    connect(ui->SignIn_pushButton, SIGNAL(clicked()), SIGNAL(showProfileWindow()));

    connect(ui->pb_About, SIGNAL(clicked()), SLOT(hide()));
    connect(ui->pb_About, SIGNAL(clicked()), SIGNAL(showAboutWindow()));
}

Login::~Login()
{
    delete ui;
}



void Login::on_Login_Exit_pushButton_clicked()
{
    exit(1);
}
