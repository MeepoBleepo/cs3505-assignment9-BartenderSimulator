/**
 * The view representation of the jigger. Only interacts with the model to send it's contents to the user's drink, otherwise it is purely used in the view.
 *
 * Github URL: https://github.com/UofU-CS3505/cs3505-assignment9-znicholas913
 *
 * Created by Logan Wood, Nicholas Zamani, Dylan Kelly, Zachary Dinsmore, and Moliang Pan
 *
 * Checked by Dylan Kelly
 * April 22, 2025
 **/

#include "jiggerTool.h"

JiggerTool::JiggerTool(QObject *parent) : QObject{parent} {}

void JiggerTool::setContents(float amount, QString ingredientName){
    this->amount = amount;
    this->ingredientName = ingredientName;
}

void JiggerTool::clearContents(){
    amount = 0.0f;
    ingredientName = "";
}

float JiggerTool::getAmount() const{
    return amount;
}

QString JiggerTool::getIngredientName() const{
    return ingredientName;
}

bool JiggerTool::isEmpty() const{
    return amount == 0.0f;
}
