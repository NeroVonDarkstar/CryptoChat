#include "changepicture.h"
#include "ui_changepicture.h"

changePicture::changePicture(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::changePicture)
{
    ui->setupUi(this);

    QPixmap DisplayPic1("C:\\imgdisplay\\pic1.jpg");
    ui->dp_1->setPixmap(DisplayPic1);

    QPixmap DisplayPic2("C:\\imgdisplay\\pic2.jpg");
    ui->dp_2->setPixmap(DisplayPic2);

    QPixmap DisplayPic3("C:\\imgdisplay\\pic3.jpg");
    ui->dp_3->setPixmap(DisplayPic3);

    QPixmap DisplayPic4("C:\\imgdisplay\\pic4.jpg");
    ui->dp_4->setPixmap(DisplayPic4);

    QPixmap DisplayPic5("C:\\imgdisplay\\pic5.jpg");
    ui->dp_5->setPixmap(DisplayPic5);

    QPixmap DisplayPic6("C:\\imgdisplay\\pic6.jpg");
    ui->dp_6->setPixmap(DisplayPic6);

    QPixmap DisplayPic7("C:\\imgdisplay\\pic7.jpg");
    ui->dp_7->setPixmap(DisplayPic7);

    QPixmap DisplayPic8("C:\\imgdisplay\\pic8.png");
    ui->dp_8->setPixmap(DisplayPic8);

    QPixmap DisplayPic9("C:\\imgdisplay\\pic9.jpg");
    ui->dp_9->setPixmap(DisplayPic9);

    QPixmap DisplayPic10("C:\\imgdisplay\\pic10.png");
    ui->dp_10->setPixmap(DisplayPic10);

    QPixmap DisplayPic11("C:\\imgdisplay\\pic11.png");
    ui->dp_11->setPixmap(DisplayPic11);

    QPixmap DisplayPic12("C:\\imgdisplay\\pic12.png");
    ui->dp_12->setPixmap(DisplayPic12);

    QPixmap DisplayPic13("C:\\imgdisplay\\pic13.png");
    ui->dp_13->setPixmap(DisplayPic13);

    QPixmap DisplayPic14("C:\\imgdisplay\\pic14.png");
    ui->dp_14->setPixmap(DisplayPic14);

    QPixmap DisplayPic15("C:\\imgdisplay\\pic15.png");
    ui->dp_15->setPixmap(DisplayPic15);

    connect(ui->pb_updatePic, SIGNAL(clicked()), SLOT(hide()));

}

changePicture::~changePicture()
{
    delete ui;
}
