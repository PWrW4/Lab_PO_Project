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

	Worrior(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, Weapon * _weapon);
	void Attack(Hero &_enemy) override;
	~Worrior();
};

