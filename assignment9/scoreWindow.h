/**
 * Window that shows the user's score.
 *
 * Github URL: https://github.com/UofU-CS3505/cs3505-assignment9-znicholas913
 *
 * Created by Logan Wood, Nicholas Zamani, Dylan Kelly, Zachary Dinsmore, and Moliang Pan
 * April 22, 2025
 **/

#ifndef SCOREWINDOW_H
#define SCOREWINDOW_H

#include <QDialog>

namespace Ui {
class ScoreWindow;
}

class ScoreWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ScoreWindow(QWidget *parent = nullptr);

    ~ScoreWindow();

private:
    Ui::ScoreWindow *ui;

public slots:
    /**
     * Sets the score text to given score and explination for the score
     * @param score - Score to show
     * @param explination - explination for the score.
     */
    void showScore(int score,QString explination);

    /**
     * Emits for the game to be restarted
     */
    void restartGame();

signals:
    /**
     * Emitted when the game needs to be restarted
     */
    void sendingRestartGame();

};

#endif // SCOREWINDOW_H
