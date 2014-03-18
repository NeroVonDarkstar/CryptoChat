#include "login.h"
#include "profile.h"
#include "settings.h"
#include "chat.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <QProgressBar>
#include <QMainWindow>
#include <changepass.h>
#include <changepicture.h>
#include <newcontact.h>
#include <about.h>
QString CS1_Name;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen *splash= new QSplashScreen;
    splash->setPixmap(QPixmap("C:\\img\\CryptoChatv4.png"));
    splash->show();

    Login lw;
    Profile pw;
    Settings sw;
    Chat cw;
    changePass cp;
    changePicture cpi;
    newContact nc;
    About ab;

    QObject::connect(&lw, SIGNAL(showProfileWindow()), &pw, SLOT(show()));
    QObject::connect(&pw, SIGNAL(showSettingsWindow()), &sw, SLOT(show()));
    QObject::connect(&pw, SIGNAL(showLoginWindow()), &lw, SLOT(show()));
    QObject::connect(&sw, SIGNAL(showChatWindow()), &cw, SLOT(show()));
    QObject::connect(&sw, SIGNAL(showProfileWindow()), &pw, SLOT(show()));
    QObject::connect(&cw, SIGNAL(showProfileWindow()), &pw, SLOT(show()));
    QObject::connect(&pw, SIGNAL(showChangePassWindow()), &cp, SLOT(show()));
    QObject::connect(&pw, SIGNAL(showChangePictureWindow()), &cpi, SLOT(show()));
    QObject::connect(&pw, SIGNAL(showNewContactWindow()), &nc, SLOT(show()));
    QObject::connect(&lw, SIGNAL(showAboutWindow()), &ab, SLOT(show()));
     QObject::connect(&ab, SIGNAL(showLoginWindow2()), &lw, SLOT(show()));

    QObject::connect(&cp, SIGNAL(hideChangePassWindow()), &pw, SLOT(show()));
    QObject::connect(&cpi, SIGNAL(hideChangePictureWindow()), &pw, SLOT(show()));
    QObject::connect(&nc, SIGNAL(hideNewContactWindow()), &pw, SLOT(show()));
    QObject::connect(&ab, SIGNAL(hideAboutWindow()), &lw, SLOT(show()));

    QObject::connect(&pw, SIGNAL(showChatWindow()), &cw, SLOT(show()));

    QTimer::singleShot(2500,splash,SLOT(close()));
    QTimer::singleShot(2500,&lw,SLOT(show()));
    return a.exec();
}
