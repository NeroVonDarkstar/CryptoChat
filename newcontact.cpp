#include "newcontact.h"
#include "ui_newcontact.h"

newContact::newContact(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::newContact)
{
    ui->setupUi(this);

    connect(ui->pb_addContact, SIGNAL(clicked()), SLOT(hide()));

}

newContact::~newContact()
{
    delete ui;
}
