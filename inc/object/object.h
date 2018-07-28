#ifndef OBJECT_H
#define OBJECT_H

#include "../common.h"

class object
{
private:

    sf::RectangleShape objectShape;
    sf::Color objectColor;
    std::string objectSprite;
    bool isObjectGravityOn;
    int objectGravity, objectSpeed;

public:

    /*void setObjectShape(sf::RectangleShape objectSz);*/
    sf::RectangleShape getObjectShape();
    
    void setObjectSize(sf::Vector2f objectSz);
    sf::Vector2f getObjectSize();

    void setObjectPos(sf::Vector2f objectPs);
    sf::Vector2f getObjectPos();

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
