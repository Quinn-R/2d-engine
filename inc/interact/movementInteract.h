#ifndef MOVEMENTINTERACT_H
#define MOVEMENTINTERACT_H

#include "../object/object.h"
#include "../object/characterObject.h"
#include "../object/collideObject.h"
#include "interact.h"

class movementInteract : public interact
{
private:

    sf::FloatRect leftBuffer;
    sf::FloatRect rightBuffer;
    sf::FloatRect topBuffer;
    sf::FloatRect bottomBuffer;
    
    bool isTouchingLeft;
    bool isTouchingRight;
    bool isTouchingTop;
    bool isTouchingBottom;

public:
    
    movementInteract();
    
    void setLeftBufferSize(sf::FloatRect leftBufferSz);
    sf::FloatRect getLeftBufferSize();
    
    void setRightBufferSize(sf::FloatRect rightBufferSz);
    sf::FloatRect getRightBufferSize();
    
    void setTopBufferSize(sf::FloatRect topBufferSz);
    sf::FloatRect getTopBufferSize();
    
    void setBottomBufferSize(sf::FloatRect bottomBufferSz);
    sf::FloatRect getBottomBufferSize();
    
    void move(std::string direction, int i, int j);
    void checkCollide(std::string direction, int i, int j);
    void setBufferSize(int i, int j);
    void updateBuffer(int i, int j);

};

#endif
