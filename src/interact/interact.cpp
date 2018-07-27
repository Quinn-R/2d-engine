#include "../../inc/common.h"
#include "../../inc/interact/interact.h"

void interact::setVecChar(std::vector<std::vector<characterObject> > vecChr)
{
    vecChar = vecChr;
}
std::vector<std::vector<characterObject> > interact::getVecChar()
{
    return vecChar;
}

void interact::setVecCollide(std::vector<std::vector<collideObject> > vecColl)
{
    vecCollide = vecColl;
}
std::vector<std::vector<collideObject> > interact::getVecCollide()
{
    return vecCollide;
}
