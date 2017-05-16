#pragma once
#include "Magician.h"

class Paladin : virtual public Magician
{
	void magicianAttack(Hero& _enemy) override;
public:
	Paladin(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, MagicialItem * _item);
	~Paladin();
};
