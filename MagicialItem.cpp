#include "MagicialItem.h"


int MagicialItem::getItemMagic()
{
	return magic;
}

MagicialItem::MagicialItem(int _magic)
{
	magic = _magic;
}

MagicialItem::~MagicialItem()
{
}
