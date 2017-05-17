#pragma once
#include "Hero.h"
#include "Weapon.h"
#include "Header.h"

class Worrior : virtual public Hero
{
	Weapon * weapon;
	void worriorAttack(Hero &_enemy);
	virtual void specialAttack(Hero &_enemy) = 0;
public:

	//seters && geters
	void setWeapon(Weapon * _weapon);
	Weapon * getWeapon() const;

	Worrior(Weapon * _weapon);
	void Attack(Hero &_enemy) override;
	~Worrior();
};

