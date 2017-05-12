#pragma once
#include "Magician.h"

class Wizard : virtual public Magician
{
	void magicianAttack(Hero& _enemy) override;
public:
	Wizard(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, MagicialItem * _item);
	~Wizard();
};

