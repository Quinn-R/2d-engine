#ifndef INTERACT_H
#define INTERACT_H

#include "../common.h"
#include "../object/object.h"
#include "../object/characterObject.h"
#include "../object/collideObject.h"

class interact
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
    
    std::vector<std::vector<characterObject> > vecChar;
    std::vector<std::vector<collideObject> > vecCollide;

public:
    
    void setLeftBufferSize(sf::FloatRect leftBufferSz);
    sf::FloatRect getLeftBufferSize();
    
    void setRightBufferSize(sf::FloatRect rightBufferSz);
    sf::FloatRect getLeftBufferSize();
    
    void setTopBufferSize(sf::FloatRect topBufferSz);
    sf::FloatRect getLeftBufferSize();
    
    void setBottomBufferSize(sf::FloatRect bottomBufferSz);
    sf::FloatRect getLeftBufferSize();
    
    void move(std::string direction);
    void checkCollide(std::string direction, int i, int j);
    void setBufferSize(int i, int j);
    void updateBuffer(int i, int j);


};

#endif
