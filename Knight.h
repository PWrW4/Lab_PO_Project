#pragma once
#include "Worrior.h"
class Knight : virtual public Worrior
{
	void worriorAttack(Hero &_enemy) override;
	void specialAttack(Hero &_enemy) override;
public:
	Knight(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, Weapon * _weapon);
	~Knight();
};
