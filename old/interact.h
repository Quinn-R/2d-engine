#ifndef INTERACT_H
#define INTERACT_H

#include "../common.h"
#include "../object/object.h"
#include "../object/characterObject.h"
#include "../object/collideObject.h"
/*#include "../object/itemObject.h"*/
/*#include "../object/inventoryObject.h"*/

class interact
{
private:
    
    std::vector<std::vector<characterObject> > vecChar;
    std::vector<std::vector<collideObject> > vecCollide;
    
public:
    
    void setVecChar(std::vector<std::vector<characterObject> > vecChr);
    std::vector<std::vector<characterObject> > getVecChar();
    
    void setVecCollide(std::vector<std::vector<collideObject> > vecColl);
    std::vector<std::vector<collideObject> > getVecCollide();
    
};

#endif
