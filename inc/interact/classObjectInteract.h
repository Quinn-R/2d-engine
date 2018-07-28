#ifndef CLASSOBJECTINTERACT_H
#define CLASSOBJECTINTERACT_H

#include "../common.h"
#include "../object/object.h"
#include "../object/characterObject.h"
#include "../object/collideObject.h"
/*#include "../object/itemObject.h"*/
/*#include "../object/inventoryObject.h"*/

class classObjectInteract
{
private:
    
    std::vector<std::vector<characterObject> > vecChar;
    std::vector<std::vector<collideObject> > vecCollide;
    std::vector<characterObject> vecPlayerChar;
    std::vector<collideObject> vecWallCollide;
    
    characterObject charObj;
    
public:
    
    classObjectInteract();
    
    //void setVecChar(std::vector<std::vector<characterObject> > vecChr);
    std::vector<std::vector<characterObject> > getVecChar();
    
    //void setVecCollide(std::vector<std::vector<collideObject> > vecColl);
    std::vector<std::vector<collideObject> > getVecCollide();
    
    void addPlayerObjects(int numPlayerToAdd, sf::Vector2f playerSize, sf::Vector2f playerPos, sf::Color playerColor/*, std::string playerSprite*/, bool playerIsGravityOn, int playerGravity, int playerSpeed);
    void addWallObjects(int numWallToAdd, sf::Vector2f wallSize, sf::Vector2f wallPos, sf::Color wallColor/*, std::string wallSprite*/, bool wallIsGravityOn, int wallGravity, int wallSpeed);
    void setCharObjects();
    void setCollideObjects();
};

#endif
