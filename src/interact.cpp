#include "../inc/common.h"
#include "../inc/interact.h"

interact::interact()
{
    
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

void interact::move(std::string direction, std::vector<std::vector<characterObject> > vecChar, std::vector<std::vector<collideObject> > vecCollide)
{
    if(direction == "left")
    {
        for(int i = 0; i < vecChar.size(); i++)
        {
            for(int j = 0; j < vecChar[i].size(); j++)
            {
                for(int k = 0; k < objectSpeed; k++)
                {
                    vecChar[j].getObjectShape().move(-1, 0);
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
                    vecChar[j].getObjectShape().move(1, 0);
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
                    vecChar[j].getObjectShape().move(0, -1);
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
                    vecChar[j].getObjectShape().move(0, 1);
                }
            }
        }
    }
    
}
