#ifndef HEADERFILE_H
#define HEADERFILE_H

class object
{
private:

    sf::FloatRect objectSize, objectPos;
    sf::Color objectColor;
    std::string objectSprite;
    bool isObjectGravityOn;
    int objectGravity, objectSpeed;

public:

    void setObjectSize(FloatRect objectSz);
    sf::FloatRect getObjectSize();

    void setObjectPos(FloatRect objectPs);
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
