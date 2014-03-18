#ifndef NEWCONTACT_H
#define NEWCONTACT_H

#include <QMainWindow>

namespace Ui {
class newContact;
}

class newContact : public QMainWindow
{
    Q_OBJECT

public:
    explicit newContact(QWidget *parent = 0);
    ~newContact();

signals:
    void hideNewContactWindow();

private:
    Ui::newContact *ui;
};

#endif // NEWCONTACT_H
