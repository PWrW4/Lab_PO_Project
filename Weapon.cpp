#include "Weapon.h"


int Weapon::getWeaponDamage() const
{
	return weaponDamage;
}

Weapon::Weapon(int _dmg, int _move)
{
	weaponDamage = _dmg;
	weaponMoveCost = _move;
}



Weapon::~Weapon()
{
}
