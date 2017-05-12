#pragma once
class Weapon
{
	int weaponDamage;
	int weaponMoveCost;
public:
	int getWeaponDamage() const;
	Weapon(int _dmg, int _move);
	~Weapon();
};

