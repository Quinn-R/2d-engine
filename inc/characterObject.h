#ifndef CHARACTEROBJECT_H
#define CHARACTEROBJECT_H

#include "common.h"
#include "object.h"

class characterObject : object
{
private:

    int health, armour, stamina;

public:

    void setCharacterhealth(int characterHlth);
    int getCharacterhealth();
    
    void setCharacterArmour(int characterArm);
    int getCharacterArmour();
    
    void setCharacterStamina(int characterStam);
    int getCharacterStamina();

};

#endif
