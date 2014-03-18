#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);

    QPixmap Pic1("C:\\img\\team1.jpg");
    ui->team_1->setPixmap(Pic1);

    QPixmap Pic2("C:\\img\\team2.jpg");
    ui->team_2->setPixmap(Pic2);

    QPixmap Pic3("C:\\img\\team3.jpg");
    ui->team_3->setPixmap(Pic3);

    QPixmap Pic4("C:\\img\\team4.jpg");
    ui->team_4->setPixmap(Pic4);

    QPixmap Pic5("C:\\img\\team5.jpg");
    ui->team_5->setPixmap(Pic5);

    QPixmap Pic6("C:\\img\\team6.jpg");
    ui->team_6->setPixmap(Pic6);

    QPixmap Pic7("C:\\img\\team7.jpg");
    ui->team_7->setPixmap(Pic7);

    QPixmap Pic8("C:\\img\\team8.jpg");
    ui->team_8->setPixmap(Pic8);

    QPixmap Pic9("C:\\img\\team9.jpg");
    ui->team_9->setPixmap(Pic9);






    connect(ui->pb_Back, SIGNAL(clicked()), SLOT(hide()));
    connect(ui->pb_Back, SIGNAL(clicked()), SIGNAL(showLoginWindow2()));
}

About::~About()
{
    delete ui;
}
