#pragma once
class Weapon
{
	int weaponDamage;
public:
	int getWeaponDamage() const;
	Weapon(int _dmg);
	~Weapon();
};

