#pragma once
#include "Hero.h"
#include "Weapon.h"

class Worrior : virtual public Hero
{
	Weapon * weapon;
public:
	Worrior(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, Weapon * _weapon);
	~Worrior();
};

