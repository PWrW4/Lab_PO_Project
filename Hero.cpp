#include "Hero.h"


Hero::Hero(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id)
{
	damage = _damege;
	defence = _defence;
	magicalResistance = _magicalResistance;
	move = _move;
	hp = _Hp;
	attackDistance = _attackdistance;
	id = _id;
}

Hero::~Hero()
{
}
