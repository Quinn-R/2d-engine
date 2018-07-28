#ifndef MOVEMENTINTERACT_H
#define MOVEMENTINTERACT_H

#include "classObjectInteract.h"

class movementInteract : public classObjectInteract
{
private:

    sf::RectangleShape leftBuffer;
    sf::RectangleShape rightBuffer;
    sf::RectangleShape topBuffer;
    sf::RectangleShape bottomBuffer;
    
    bool isTouchingLeft;
    bool isTouchingRight;
    bool isTouchingTop;
    bool isTouchingBottom;

public:
    
    movementInteract();
    
    void setLeftBufferSize(sf::RectangleShape leftBufferSz);
    sf::RectangleShape getLeftBufferSize();
    
    void setRightBufferSize(sf::RectangleShape rightBufferSz);
    sf::RectangleShape getRightBufferSize();
    
    void setTopBufferSize(sf::RectangleShape topBufferSz);
    sf::RectangleShape getTopBufferSize();
    
    void setBottomBufferSize(sf::RectangleShape bottomBufferSz);
    sf::RectangleShape getBottomBufferSize();
    
    void move(std::string direction, int i, int j);
    void checkCollide(std::string direction, int i, int j);
    void setBufferSize(int i, int j);
    void updateBuffer(int i, int j);

};

#endif
