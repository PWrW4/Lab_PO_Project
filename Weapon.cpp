#include "Weapon.h"


int Weapon::getWeaponDamage() const
{
	return weaponDamage;
}

Weapon::Weapon(int _dmg)
{
	weaponDamage = _dmg;
}


Weapon::~Weapon()
{
}
