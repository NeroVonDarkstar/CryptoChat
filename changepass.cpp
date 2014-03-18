#include "changepass.h"
#include "ui_changepass.h"

changePass::changePass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::changePass)
{
    ui->setupUi(this);







    connect(ui->pb_updatePass, SIGNAL(clicked()), SLOT(hide()));
}

changePass::~changePass()
{
    delete ui;
}
