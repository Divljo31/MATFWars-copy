#ifndef CREATE_H
#define CREATE_H

#include <QDialog>

#include "waitingroom.h"

namespace Ui {
class Create;
}

class Create : public QDialog
{
    Q_OBJECT

public:
    explicit Create(QWidget *parent = nullptr);
    ~Create();

// menjam
signals:
    void backCreatePop1Clicked();

private slots:
    void on_back_pop1_button_clicked();

    void on_create_pop1_button_clicked();

private:
    Ui::Create *ui;
    WaitingRoom *ptrWaitingRoom;
};

#endif // CREATE_H