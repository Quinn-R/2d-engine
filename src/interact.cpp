#include "../inc/common.h"
#include "../inc/interact.h"

interact::interact()
{
    isTouchingLeft = 0;
    isTouchingRight = 0;
    isTouchingTop = 0;
    isTouchingBottom = 0;
}

void interact::setLeftBufferSize(sf::FloatRect leftBufferSz)
{
    leftBuffer = leftBufferSz;
}
sf::FloatRect interact::getLeftBufferSize()
{
    return leftBuffer;
}

void interact::setRightBufferSize(sf::FloatRect rightBufferSz)
{
    rightBuffer = rightBufferSz;
}
sf::FloatRect interact::getLeftBufferSize()
{
    return rightBuffer;
}

void interact::setTopBufferSize(sf::FloatRect topBufferSz)
{
    topBuffer = topBufferSz;
}
sf::FloatRect interact::getLeftBufferSize()
{
    return topBuffer;
}

void interact::setBottomBufferSize(sf::FloatRect bottomBufferSz)
{
    bottomBuffer = bottomBufferSz;
}
sf::FloatRect interact::getLeftBufferSize()
{
    return bottomBuffer;
}

void interact::move(std::string direction, int i, int j)
{
    if(direction == "left")
    {
        for(int i = 0; i < vecChar.size(); i++)
        {
            for(int j = 0; j < vecChar[i].size(); j++)
            {
                for(int k = 0; k < objectSpeed; k++)
                {
                    updateBuffer();
                    checkCollide();
                    if(isTouchingLeft == 0)
                    {
                        vecChar[i][j].getObjectShape().move(-1, 0);
                    }
                }
            }
        }
    }
    if(direction == "right")
    {
        for(int k = 0; k < objectSpeed; k++)
        {
            updateBuffer();
            checkCollide();
            if(isTouchingRight == 0)
            {
                vecChar[i][j].getObjectShape().move(1, 0);
            }
        }
    }
    if(direction == "up")
    {
        for(int k = 0; k < objectSpeed; k++)
        {
            updateBuffer();
            checkCollide();
            if(isTouchingTop == 0)
            {
                vecChar[i][j].getObjectShape().move(0, -1);
            }
        }
    }
    if(direction == "down")
    {
        for(int k = 0; k < objectSpeed; k++)
        {
            updateBuffer();
            checkCollide();
            if(isTouchingBottom == 0)
            {
                vecChar[i][j].getObjectShape().move(0, 1);
            }
        }
    }
    
}

void interact::checkCollide(std::string direction, int i, int j)
{
    if(direction == "left")
    {
        if(leftBuffer.getGlobalBounds().intersects(vecChar[i][j].getObjectShape().getGlobalBounds())
        {
            isTouchingLeft = 1;
            isTouchingRight = 0;
            isTouchingTop = 0;
            isTouchingBottom = 0;
        }
    }
    if(direction == "right")
    {
        if(rightBuffer.getGlobalBounds().intersects(vecChar[i][j].getObjectShape().getGlobalBounds())
        {
            isTouchingLeft = 0;
            isTouchingRight = 1;
            isTouchingTop = 0;
            isTouchingBottom = 0;
        }
    }
    if(direction == "up")
    {
        if(topBuffer.getGlobalBounds().intersects(vecChar[i][j].getObjectShape().getGlobalBounds())
        {
            isTouchingLeft = 0;
            isTouchingRight = 0;
            isTouchingTop = 1;
            isTouchingBottom = 0;
        }
    }
    if(direction == "down")
    {
        if(bottomBuffer.getGlobalBounds().intersects(vecChar[i][j].getObjectShape().getGlobalBounds())
        {
            isTouchingLeft = 0;
            isTouchingRight = 0;
            isTouchingTop = 0;
            isTouchingBottom = 1;
        }
    }
    
}

void interact::setBufferSize(int i, int j)
{
    leftBuffer.setSize(sf::Vector2f(1, vecChar[i][j].getObjectShape().height));
    rightBuffer.setSize(sf::Vector2f(1, vecChar[i][j].getObjectShape().height));
    topBuffer.setSize(sf::Vector2f(vecChar[i][j].getObjectShape().width, 1));
    bottomBuffer.setSize(vecChar[i][j].getObjectShape().width, 1));
}

void interact::updateBuffer(int i, int j)
{
    leftBuffer.setPosition(vecChar[i][j].getObjectShape().x - 1, vecChar[i][j].getObjectShape().y);
    rightBuffer.setPosition(vecChar[i][j].getObjectShape().x + vecChar[i][j].getObjectShape().width + 1, vecChar[i][j].getObjectShape().y);
    topBuffer.setPosition(vecChar[i][j].getObjectShape().x, vecChar[i][j].getObjectShape().y - 1);
    bottomBuffer.setPosition(vecChar[i][j].getObjectShape().x, vecChar[i][j].getObjectShape().y + vecChar[i][j].getObjectShape().width + 1);
}


/*

if(direction == "left")
{
    for(int i = 0; i < vecChar.size(); i++)
    {
        for(int j = 0; j < vecChar[i].size(); j++)
        {
            for(int k = 0; k < objectSpeed; k++)
            {
                updateBuffer();
                checkCollide();
                if(isTouchingLeft == 0)
                {
                    vecChar[i][j].getObjectShape().move(-1, 0);
                }
            }
        }
    }
}
if(direction == "right")
{
    for(int i = 0; i < vecChar.size(); i++)
    {
        for(int j = 0; j < vecChar[i].size(); j++)
        {
            for(int k = 0; k < objectSpeed; k++)
            {
                updateBuffer();
                checkCollide();
                if(isTouchingRight == 0)
                {
                    vecChar[i][j].getObjectShape().move(1, 0);
                }
            }
        }
    }
}
if(direction == "up")
{
    for(int i = 0; i < vecChar.size(); i++)
    {
        for(int j = 0; j < vecChar[i].size(); j++)
        {
            for(int k = 0; k < objectSpeed; k++)
            {
                updateBuffer();
                checkCollide();
                if(isTouchingTop == 0)
                {
                    vecChar[i][j].getObjectShape().move(0, -1);
                }
            }
        }
    }
}
if(direction == "down")
{
    for(int i = 0; i < vecChar.size(); i++)
    {
        for(int j = 0; j < vecChar[i].size(); j++)
        {
            for(int k = 0; k < objectSpeed; k++)
            {
                updateBuffer();
                checkCollide();
                if(isTouchingBottom == 0)
                {
                    vecChar[i][j].getObjectShape().move(0, 1);
                }
            }
        }
    }
}

*/
