/**
 * Represents the user's drink in the model. Mostly used for scoring their drink.
 *
 * Github URL: https://github.com/UofU-CS3505/cs3505-assignment9-znicholas913
 *
 * Created by Logan Wood, Nicholas Zamani, Dylan Kelly, Zachary Dinsmore, and Moliang Pan
 *
 * Checked by Logan Wood
 * April 22, 2025
 **/

#include "userDrink.h"
#include <QDebug>

UserDrink::UserDrink(QObject *parent) : QObject{parent} {}

UserDrink::~UserDrink(){
    qDeleteAll(ingredients);
    ingredients.clear();
}

void UserDrink::addIngredient(QString ingredientName, float amount, bool isGarnish){
    if(ingredientName.isEmpty()){
        qWarning() << "Attempted to add empty ingredient name";
        return;
    }

    ingredients.append(new IngredientData(ingredientName, amount, isGarnish ? Action::GARNISH : Action::NOTHING));
}

void UserDrink::shakeIngredient(){
    if(ingredients.isEmpty()) return;

    for (IngredientData* ingredient : ingredients) {
        if (ingredient->getAction() != Action::GARNISH)
            ingredient->setAction(Action::SHAKE);
    }
}

QVector<IngredientData*>& UserDrink::getIngredients(){
    return ingredients;
}
