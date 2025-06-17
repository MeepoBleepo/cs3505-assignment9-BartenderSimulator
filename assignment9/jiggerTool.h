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

#ifndef JIGGERTOOL_H
#define JIGGERTOOL_H

#include <QObject>
#include <QString>

class JiggerTool : public QObject
{
    Q_OBJECT

public:
    JiggerTool(QObject *parent = nullptr);

    /**
     * Clears the contents of the jigger
     */
    void clearContents();

    /**
     * Gets the ingredient amount in the jigger
     * @return Jigger ingredient amount
     */
    float getAmount() const;

    /**
     * Gets the name of the ingredient in the jigger
     * @return Jigger ingredient name
     */
    QString getIngredientName() const;

    /**
     * Determines if the jigger is empty
     * @return True if the jigger is empty; false otherwide
     */
    bool isEmpty() const;

private:
    float amount = 0.0f;
    QString ingredientName;

public slots:
    /**
     * Sets the contents of the jigger to the given amount and ingredient
     * @param amount - Ingredient amount
     * @param ingredientName - Ingredient name
     */
    void setContents(float amount, QString ingredientName);
};

#endif // JIGGERTOOL_H
