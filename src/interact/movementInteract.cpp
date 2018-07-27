#include "../../inc/common.h"
#include "../../inc/interact/movementInteract.h"

movementInteract::movementInteract()
{
    isTouchingLeft = 0;
    isTouchingRight = 0;
    isTouchingTop = 0;
    isTouchingBottom = 0;
}

void movementInteract::setLeftBufferSize(sf::FloatRect leftBufferSz)
{
    leftBuffer = leftBufferSz;
}
sf::FloatRect movementInteract::getLeftBufferSize()
{
    return leftBuffer;
}

void movementInteract::setRightBufferSize(sf::FloatRect rightBufferSz)
{
    rightBuffer = rightBufferSz;
}
sf::FloatRect movementInteract::getRightBufferSize()
{
    return rightBuffer;
}

void movementInteract::setTopBufferSize(sf::FloatRect topBufferSz)
{
    topBuffer = topBufferSz;
}
sf::FloatRect movementInteract::getTopBufferSize()
{
    return topBuffer;
}

void movementInteract::setBottomBufferSize(sf::FloatRect bottomBufferSz)
{
    bottomBuffer = bottomBufferSz;
}
sf::FloatRect movementInteract::getBottomBufferSize()
{
    return bottomBuffer;
}

void movementInteract::move(std::string direction, int i, int j)
{
    if(direction == "left")
    {
        for(int i = 0; i < getVecChar().size(); i++)
        {
            for(int j = 0; j < getVecChar()[i].size(); j++)
            {
                for(int k = 0; k < getObjectSpeed(); k++)
                {
                    updateBuffer();
                    checkCollide();
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
        for(int k = 0; k < getObjectSpeed(); k++)
        {
            updateBuffer();
            checkCollide();
            if(isTouchingRight == 0)
            {
                getVecChar()[i][j].getObjectShape().move(1, 0);
            }
        }
    }
    if(direction == "up")
    {
        for(int k = 0; k < getObjectSpeed(); k++)
        {
            updateBuffer();
            checkCollide();
            if(isTouchingTop == 0)
            {
                getVecChar()[i][j].getObjectShape().move(0, -1);
            }
        }
    }
    if(direction == "down")
    {
        for(int k = 0; k < getObjectSpeed(); k++)
        {
            updateBuffer();
            checkCollide();
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
        if(leftBuffer.getGlobalBounds().intersects(getVecCollide()[i][j].getObjectShape().getGlobalBounds())
        {
            isTouchingLeft = 1;
            isTouchingRight = 0;
            isTouchingTop = 0;
            isTouchingBottom = 0;
        }
    }
    if(direction == "right")
    {
        if(rightBuffer.getGlobalBounds().intersects(getVecCollide()[i][j].getObjectShape().getGlobalBounds())
        {
            isTouchingLeft = 0;
            isTouchingRight = 1;
            isTouchingTop = 0;
            isTouchingBottom = 0;
        }
    }
    if(direction == "up")
    {
        if(topBuffer.getGlobalBounds().intersects(getVecCollide()[i][j].getObjectShape().getGlobalBounds())
        {
            isTouchingLeft = 0;
            isTouchingRight = 0;
            isTouchingTop = 1;
            isTouchingBottom = 0;
        }
    }
    if(direction == "down")
    {
        if(bottomBuffer.getGlobalBounds().intersects(getVecCollide()[i][j].getObjectShape().getGlobalBounds())
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
    leftBuffer.setSize(sf::Vector2f(1, getVecChar()[i][j].getObjectShape().height));
    rightBuffer.setSize(sf::Vector2f(1, getVecChar()[i][j].getObjectShape().height));
    topBuffer.setSize(sf::Vector2f(getVecChar()[i][j].getObjectShape().width, 1));
    bottomBuffer.setSize(getVecChar()[i][j].getObjectShape().width, 1));
}

void movementInteract::updateBuffer(int i, int j)
{
    leftBuffer.setPosition(getVecChar()[i][j].getObjectShape().x - 1, getVecChar()[i][j].getObjectShape().y);
    rightBuffer.setPosition(getVecChar()[i][j].getObjectShape().x + getVecChar()[i][j].getObjectShape().width + 1, getVecChar()[i][j].getObjectShape().y);
    topBuffer.setPosition(getVecChar()[i][j].getObjectShape().x, getVecChar()[i][j].getObjectShape().y - 1);
    bottomBuffer.setPosition(getVecChar()[i][j].getObjectShape().x, getVecChar()[i][j].getObjectShape().y + getVecChar()[i][j].getObjectShape().width + 1);
}


/*

if(direction == "left")
{
    for(int i = 0; i < getVecChar().size(); i++)
    {
        for(int j = 0; j < getVecChar()[i].size(); j++)
        {
            for(int k = 0; k < getObjectSpeed(); k++)
            {
                updateBuffer();
                checkCollide();
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
            for(int k = 0; k < getObjectSpeed(); k++)
            {
                updateBuffer();
                checkCollide();
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
            for(int k = 0; k < getObjectSpeed(); k++)
            {
                updateBuffer();
                checkCollide();
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
            for(int k = 0; k < getObjectSpeed(); k++)
            {
                updateBuffer();
                checkCollide();
                if(isTouchingBottom == 0)
                {
                    getVecChar()[i][j].getObjectShape().move(0, 1);
                }
            }
        }
    }
}

*/
