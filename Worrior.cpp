#include "Worrior.h"


void Worrior::setWeapon(Weapon* _weapon)
{
	weapon = _weapon;
}

Weapon * Worrior::getWeapon() const
{
	return weapon;
}

Worrior::Worrior(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, Weapon * _weapon)
				: Hero(_damege,_defence,_magicalResistance,_move,_attackdistance,_Hp,_id)
{
	weapon = _weapon;
}

void Worrior::Attack(Hero& _enemy)
{
	worriorAttack(_enemy);
	if (rand() % 2)
	{
		specialAttack(_enemy);
	}
}

Worrior::~Worrior()
{
}
