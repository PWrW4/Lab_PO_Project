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

Magician::Magician(MagicialItem* _item)
{
	magicalItem = _item;
}


Magician::~Magician()
{
}
