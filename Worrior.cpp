
#include "Worrior.h"


Worrior::Worrior(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, Weapon * _weapon)
				: Hero(_damege,_defence,_magicalResistance,_move,_attackdistance,_Hp,_id)
{
	weapon = _weapon;
}

Worrior::~Worrior()
{
}
