#include "Magician.h"


void Magician::setMagicalItem(MagicialItem* _setTo)
{
	magicalItem = _setTo;
}

MagicialItem* Magician::getMagicalItem() const
{
	return magicalItem;
}

void Magician::Attack(Hero& _enemy)
{
	magicianAttack(_enemy);
}

Magician::Magician(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, MagicialItem* _item)
	:Hero(0/*_damege*/, _defence, _magicalResistance, _move, _attackdistance, _Hp, _id)
{
	magicalItem = _item;
}


Magician::~Magician()
{
}
