#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);

    connect(ui->pushButton_Profile, SIGNAL(clicked()), SLOT(hide()));
    connect(ui->pushButton_Profile, SIGNAL(clicked()), SIGNAL(showProfileWindow()));

    connect(ui->pushButton_chat, SIGNAL(clicked()), SLOT(hide()));
    connect(ui->pushButton_chat, SIGNAL(clicked()), SIGNAL(showChatWindow()));
}

Settings::~Settings()
{
    delete ui;
}


