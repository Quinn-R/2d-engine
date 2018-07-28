#include "../../inc/common.h"
#include "../../inc/interact/movementInteract.h"

movementInteract::movementInteract()
{
    isTouchingLeft = 0;
    isTouchingRight = 0;
    isTouchingTop = 0;
    isTouchingBottom = 0;
}

void movementInteract::setLeftBufferSize(sf::RectangleShape leftBufferSz)
{
    leftBuffer = leftBufferSz;
}
sf::RectangleShape movementInteract::getLeftBufferSize()
{
    return leftBuffer;
}

void movementInteract::setRightBufferSize(sf::RectangleShape rightBufferSz)
{
    rightBuffer = rightBufferSz;
}
sf::RectangleShape movementInteract::getRightBufferSize()
{
    return rightBuffer;
}

void movementInteract::setTopBufferSize(sf::RectangleShape topBufferSz)
{
    topBuffer = topBufferSz;
}
sf::RectangleShape movementInteract::getTopBufferSize()
{
    return topBuffer;
}

void movementInteract::setBottomBufferSize(sf::RectangleShape bottomBufferSz)
{
    bottomBuffer = bottomBufferSz;
}
sf::RectangleShape movementInteract::getBottomBufferSize()
{
    return bottomBuffer;
}

void movementInteract::move(std::string direction, int i, int j)
{
    if(direction == "left")
    {
        for(int k = 0; k < getVecChar()[i][j].getObjectSpeed(); k++)
        {
            updateBuffer(0, 0);
            checkCollide(direction, 0, 0);
            if(isTouchingLeft == 0)
            {
                getVecChar()[i][j].getObjectShape().move(-1, 0);
            }
        }
    }
    if(direction == "right")
    {
        for(int k = 0; k < getVecChar()[i][j].getObjectSpeed(); k++)
        {
            updateBuffer(0, 0);
            checkCollide(direction, 0, 0);
            if(isTouchingRight == 0)
            {
                getVecChar()[i][j].getObjectShape().move(1, 0);
            }
        }
    }
    if(direction == "up")
    {
        for(int k = 0; k < getVecChar()[i][j].getObjectSpeed(); k++)
        {
            updateBuffer(0, 0);
            checkCollide(direction, 0, 0);
            if(isTouchingTop == 0)
            {
                getVecChar()[i][j].getObjectShape().move(0, -1);
            }
        }
    }
    if(direction == "down")
    {
        for(int k = 0; k < getVecChar()[i][j].getObjectSpeed(); k++)
        {
            updateBuffer(0, 0);
            checkCollide(direction, 0, 0);
            if(isTouchingBottom == 0)
            {
                getVecChar()[i][j].getObjectShape().move(0, 1);
            }
        }
    }
    
}

void movementInteract::checkCollide(std::string direction, int i, int j)
{
    if(direction == "left")
    {
        if(leftBuffer.getGlobalBounds().intersects(getVecCollide()[i][j].getObjectShape().getGlobalBounds()))
        {
            isTouchingLeft = 1;
            isTouchingRight = 0;
            isTouchingTop = 0;
            isTouchingBottom = 0;
        }
    }
    if(direction == "right")
    {
        if(rightBuffer.getGlobalBounds().intersects(getVecCollide()[i][j].getObjectShape().getGlobalBounds()))
        {
            isTouchingLeft = 0;
            isTouchingRight = 1;
            isTouchingTop = 0;
            isTouchingBottom = 0;
        }
    }
    if(direction == "up")
    {
        if(topBuffer.getGlobalBounds().intersects(getVecCollide()[i][j].getObjectShape().getGlobalBounds()))
        {
            isTouchingLeft = 0;
            isTouchingRight = 0;
            isTouchingTop = 1;
            isTouchingBottom = 0;
        }
    }
    if(direction == "down")
    {
        if(bottomBuffer.getGlobalBounds().intersects(getVecCollide()[i][j].getObjectShape().getGlobalBounds()))
        {
            isTouchingLeft = 0;
            isTouchingRight = 0;
            isTouchingTop = 0;
            isTouchingBottom = 1;
        }
    }
    
}

void movementInteract::setBufferSize(int i, int j)
{
    leftBuffer.setSize(sf::Vector2f(1, getVecChar()[i][j].getObjectSize().y));
    rightBuffer.setSize(sf::Vector2f(1, getVecChar()[i][j].getObjectSize().y));
    topBuffer.setSize(sf::Vector2f(getVecChar()[i][j].getObjectSize().x, 1));
    bottomBuffer.setSize(sf::Vector2f(getVecChar()[i][j].getObjectSize().x, 1));
}

void movementInteract::updateBuffer(int i, int j)
{
    leftBuffer.setPosition(sf::Vector2f(getVecChar()[i][j].getObjectPos().x - 1, getVecChar()[i][j].getObjectPos().y));
    rightBuffer.setPosition(sf::Vector2f(getVecChar()[i][j].getObjectPos().x + getVecChar()[i][j].getObjectSize().x + 1, getVecChar()[i][j].getObjectPos().y));
    topBuffer.setPosition(sf::Vector2f(getVecChar()[i][j].getObjectPos().x, getVecChar()[i][j].getObjectPos().y - 1));
    bottomBuffer.setPosition(sf::Vector2f(getVecChar()[i][j].getObjectPos().x, getVecChar()[i][j].getObjectPos().y + getVecChar()[i][j].getObjectSize().y + 1));
}

/*

if(direction == "left")
{
    for(int i = 0; i < getVecChar().size(); i++)
    {
        for(int j = 0; j < getVecChar()[i].size(); j++)
        {
            for(int k = 0; k < charObj.getObjectSpeed(); k++)
            {
                updateBuffer(0, 0);
                checkCollide(direction, 0, 0);
                if(isTouchingLeft == 0)
                {
                    getVecChar()[i][j].getObjectShape().move(-1, 0);
                }
            }
        }
    }
}
if(direction == "right")
{
    for(int i = 0; i < getVecChar().size(); i++)
    {
        for(int j = 0; j < getVecChar()[i].size(); j++)
        {
            for(int k = 0; k < charObj.getObjectSpeed(); k++)
            {
                updateBuffer(0, 0);
                checkCollide(direction, 0, 0);
                if(isTouchingRight == 0)
                {
                    getVecChar()[i][j].getObjectShape().move(1, 0);
                }
            }
        }
    }
}
if(direction == "up")
{
    for(int i = 0; i < getVecChar().size(); i++)
    {
        for(int j = 0; j < getVecChar()[i].size(); j++)
        {
            for(int k = 0; k < charObj.getObjectSpeed(); k++)
            {
                updateBuffer(0, 0);
                checkCollide(direction, 0, 0);
                if(isTouchingTop == 0)
                {
                    getVecChar()[i][j].getObjectShape().move(0, -1);
                }
            }
        }
    }
}
if(direction == "down")
{
    for(int i = 0; i < getVecChar().size(); i++)
    {
        for(int j = 0; j < getVecChar()[i].size(); j++)
        {
            for(int k = 0; k < charObj.getObjectSpeed(); k++)
            {
                updateBuffer(0, 0);
                checkCollide(direction, 0, 0);
                if(isTouchingBottom == 0)
                {
                    getVecChar()[i][j].getObjectShape().move(0, 1);
                }
            }
        }
    }
}

*/
