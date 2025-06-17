/**
 * Window that shows the user's score.
 *
 * Github URL: https://github.com/UofU-CS3505/cs3505-assignment9-znicholas913
 *
 * Created by Logan Wood, Nicholas Zamani, Dylan Kelly, Zachary Dinsmore, and Moliang Pan
 * April 22, 2025
 **/

#include "scoreWindow.h"
#include "ui_scoreWindow.h"

ScoreWindow::ScoreWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ScoreWindow)
{
    ui->setupUi(this);
    connect(ui->restart, &QPushButton::clicked, this, &ScoreWindow::restartGame);
}

ScoreWindow::~ScoreWindow()
{
    delete ui;
}

void ScoreWindow::showScore(int score, QString explination){
    ui->userScore->setText(QString::number(score));
    ui->explinationText->setText(explination);
}

void ScoreWindow::restartGame(){
    emit sendingRestartGame();
}
