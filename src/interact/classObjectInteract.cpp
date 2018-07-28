#include "../../inc/common.h"
#include "../../inc/interact/classObjectInteract.h"

classObjectInteract::classObjectInteract()
{
    
}

/*void classObjectInteract::setVecChar(std::vector<std::vector<characterObject> > vecChr)
{
    vecChar = vecChr;
}*/
std::vector<std::vector<characterObject> > classObjectInteract::getVecChar()
{
    return vecChar;
}

/*void classObjectInteract::setVecCollide(std::vector<std::vector<collideObject> > vecColl)
{
    vecCollide = vecColl;
}*/
std::vector<std::vector<collideObject> > classObjectInteract::getVecCollide()
{
    return vecCollide;
}

void classObjectInteract::addPlayerObjects(int numPlayerToAdd, sf::Vector2f playerSize, sf::Vector2f playerPos, sf::Color playerColor/*, std::string playerSprite*/, bool playerIsGravityOn, int playerGravity, int playerSpeed)
{
    for(int i = 0; i < numPlayerToAdd; i++)
    {
        vecPlayerChar.push_back(characterObject());
        
        vecPlayerChar[i].setObjectSize(playerSize);
        vecPlayerChar[i].setObjectPos(playerPos);
        vecPlayerChar[i].setObjectColor(playerColor);
        /*vecPlayerChar[i].setObjectSprite(playerSprite);*/
        vecPlayerChar[i].setIsObjectGravityOn(playerIsGravityOn);
        vecPlayerChar[i].setObjectGravity(playerGravity);
        vecPlayerChar[i].setObjectSpeed(playerSpeed);
    }
}

void classObjectInteract::addWallObjects(int numWallToAdd, sf::Vector2f wallSize, sf::Vector2f wallPos, sf::Color wallColor/*, std::string wallSprite*/, bool wallIsGravityOn, int wallGravity, int wallSpeed)
{
    for(int i = 0; i < numWallToAdd; i++)
    {
        vecWallCollide.push_back(collideObject());
        
        vecWallCollide[i].setObjectSize(wallSize);
        vecWallCollide[i].setObjectPos(wallPos);
        vecWallCollide[i].setObjectColor(wallColor);
        /*vecWallCollide[i].setObjectSprite(wallSprite);*/
        vecWallCollide[i].setIsObjectGravityOn(wallIsGravityOn);
        vecWallCollide[i].setObjectGravity(wallGravity);
        vecWallCollide[i].setObjectSpeed(wallSpeed);
    }
}

void classObjectInteract::setCharObjects()
{
    vecChar.push_back(vecPlayerChar);
}

void classObjectInteract::setCollideObjects()
{
    vecCollide.push_back(vecWallCollide);
}
