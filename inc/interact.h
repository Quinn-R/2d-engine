#ifndef INTERACT_H
#define INTERACT_H

#include "common.h"
#include "object.h"
#include "characterObject.h"
#include "collideObject.h"

class interact
{
private:

    sf::FloatRect leftBuffer;
    sf::FloatRect rightBuffer;
    sf::FloatRect topBuffer;
    sf::FloatRect bottomBuffer;

public:
    
    interact();
    
    void setLeftBufferSize(sf::FloatRect leftBufferSz);
    sf::FloatRect getLeftBufferSize();
    
    void setRightBufferSize(sf::FloatRect rightBufferSz);
    sf::FloatRect getLeftBufferSize();
    
    void setTopBufferSize(sf::FloatRect topBufferSz);
    sf::FloatRect getLeftBufferSize();
    
    void setBottomBufferSize(sf::FloatRect bottomBufferSz);
    sf::FloatRect getLeftBufferSize();
    
    void move(std::string direction, std::vector<std::vector<characterObject> > vecChar, std::vector<std::vector<collideObject> > vecCollide);

};

#endif
