#include "../../inc/common.h"
#include "../../inc/object/object.h"

/*void object::setObjectShape(sf::RectangleShape objectSz)
{
    objectShape = objectSz;
}*/
sf::RectangleShape object::getObjectShape()
{
    return objectShape;
}

void object::setObjectSize(sf::Vector2f objectSz)
{
    objectShape.setSize(objectSz);
}
sf::Vector2f object::getObjectSize()
{
    return objectShape.getSize();
}

void object::setObjectPos(sf::Vector2f objectPs)
{
    objectShape.setPosition(objectPs);
}
sf::Vector2f object::getObjectPos()
{
    return objectShape.getPosition();
}

void object::setObjectColor(sf::Color objectClr)
{
    objectColor = objectClr;
}
sf::Color object::getObjectColor()
{
    return objectColor;
}

void object::setObjectSprite(std::string objectSpr)
{
    objectSprite = objectSpr;
}
std::string object::getObjectSprite()
{
    return objectSprite;
}

void object::setIsObjectGravityOn(int isObjectGravOn)
{
    isObjectGravityOn = isObjectGravOn;
}
int object::getIsObjectGravityOn()
{
    return isObjectGravityOn;
}

void object::setObjectGravity(int objectGrav)
{
    objectGravity = objectGrav;
}
int object::getObjectGravity()
{
    return objectGravity;
}

void object::setObjectSpeed(int objectSpeed)
{
    objectSpeed = objectSpeed;
}
int object::getObjectSpeed()
{
    return objectSpeed;
}
