#ifndef CHARACTEROBJECT_H
#define CHARACTEROBJECT_H

#include "../common.h"
#include "object.h"

class characterObject : public object
{
private:

    int characterHealth, characterArmour, characterStamina;

public:

    void setCharacterhealth(int characterHlth);
    int getCharacterhealth();
    
    void setCharacterArmour(int characterArm);
    int getCharacterArmour();
    
    void setCharacterStamina(int characterStam);
    int getCharacterStamina();

};

#endif
