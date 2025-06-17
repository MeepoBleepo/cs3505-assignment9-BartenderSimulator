/**
 * The starting window for this application. Displays gameplay instructions
 * as well as what this application's purpose is.
 *
 * Github URL: https://github.com/UofU-CS3505/cs3505-assignment9-znicholas913
 *
 * Created by Logan Wood, Nicholas Zamani, Dylan Kelly, Zachary Dinsmore, and Moliang Pan
 *
 * Checked by Logan Wood
 * April 22, 2025
 **/

#ifndef STARTERPAGE_H
#define STARTERPAGE_H

#include <QMainWindow>
#include "mainWindow.h"

namespace Ui {
class StarterPage;
}

class StarterPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit StarterPage(QWidget *parent = nullptr);
    ~StarterPage();

private:
    Ui::StarterPage *ui;
    MainWindow main;
public slots:
    void closeWindow();
};

#endif // STARTERPAGE_H
