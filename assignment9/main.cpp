/**
 * Main function of the program, starts the view and nothing else.
 *
 * Github URL: https://github.com/UofU-CS3505/cs3505-assignment9-znicholas913
 *
 * Created by Logan Wood, Nicholas Zamani, Dylan Kelly, Zachary Dinsmore, and Moliang Pan
 *
 * Checked by Dylan Kelly
 * April 22, 2025
 **/

#include "starterpage.h"
#include <QApplication>
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StarterPage w;

    QFontDatabase::addApplicationFont(":/fonts/Chalk-Regular.ttf");

    w.show();
    return a.exec();
}
