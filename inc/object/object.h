#ifndef OBJECT_H
#define OBJECT_H

#include "../common.h"

class object
{
private:

    sf::FloatRect objectShape;
    sf::FloatRect objectPos;
    sf::Color objectColor;
    std::string objectSprite;
    bool isObjectGravityOn;
    int objectGravity, objectSpeed;

public:

    void setObjectShape(sf::FloatRect objectSz);
    sf::FloatRect getObjectShape();

    void setObjectPos(sf::FloatRect objectPs);
    sf::FloatRect getObjectPos();

    void setObjectColor(sf::Color objectClr);
    sf::Color getObjectColor();

    void setObjectSprite(std::string objectSpr);
    std::string getObjectSprite();

    void setIsObjectGravityOn(int isObjectGravOn);
    int getIsObjectGravityOn();

    void setObjectGravity(int objectGrav);
    int getObjectGravity();

    void setObjectSpeed(int objectSpd);
    int getObjectSpeed();

};

#endif
