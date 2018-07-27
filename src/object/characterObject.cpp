#include "../../inc/common.h"
#include "../../inc/object/characterObject.h"

void characterObject::setCharacterhealth(int characterHlth)
{
    characterHealth = characterHlth;
}
int characterObject::getCharacterhealth()
{
    return characterHealth;
}

void characterObject::setCharacterArmour(int characterArm)
{
    characterArmour = characterArm;
}
int characterObject::getCharacterArmour()
{
    return characterArmour;
}

void characterObject::setCharacterStamina(int characterStam)
{
    characterStamina = characterStam;
}
int characterObject::getCharacterStamina()
{
    return characterStamina;
}
