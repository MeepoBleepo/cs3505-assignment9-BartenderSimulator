/**
 * The notification window that confirms the pouring action when objects have contact.
 *
 * Github URL: https://github.com/UofU-CS3505/cs3505-assignment9-znicholas913
 *
 * Created by Logan Wood, Nicholas Zamani, Dylan Kelly, Zachary Dinsmore, and Moliang Pan
 * April 22, 2025
 *
 * Checked by Moliang Pan
 **/

#include "pourwindow.h"
#include "ui_pourwindow.h"

PourWindow::PourWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PourWindow)
{
    ui->setupUi(this);
    connect(ui->confirmButton, &QPushButton::clicked, this, &PourWindow::pourConfirmed);
}

PourWindow::~PourWindow()
{
    delete ui;
}

void PourWindow::pourConfirmed(){
    emit pourDrink(objectA, objectB);
}

void PourWindow::getStringsFromView(QString object1, QString object2){
    objectA = object1;
    objectB = object2;
    ui->text->setText("Are you sure you want to pour \n" + object1 + " into " + object2 + "?");
}

void PourWindow::closeEvent(QCloseEvent *event){
    emit windowClosed();
}
