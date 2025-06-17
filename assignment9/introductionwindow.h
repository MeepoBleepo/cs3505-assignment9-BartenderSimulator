/**
 * The help information window that shows up at start
 *
 * Github URL: https://github.com/UofU-CS3505/cs3505-assignment9-znicholas913
 *
 * Created by Logan Wood, Nicholas Zamani, Dylan Kelly, Zachary Dinsmore, and Moliang Pan
 * April 22, 2025
 **/


#ifndef INTRODUCTIONWINDOW_H
#define INTRODUCTIONWINDOW_H

#include <QDialog>

namespace Ui {
class IntroductionWindow;
}

class IntroductionWindow : public QDialog
{
    Q_OBJECT

public:
    explicit IntroductionWindow(QWidget *parent = nullptr);
    ~IntroductionWindow();

private:
    Ui::IntroductionWindow *ui;

public slots:
    void closeWindow();
};

#endif // INTRODUCTIONWINDOW_H
