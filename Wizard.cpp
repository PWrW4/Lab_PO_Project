#include "Wizard.h"


void Wizard::magicianAttack(Hero& _enemy)
{
	int damageToDo = 0;
	switch (getHeroType())
	{
	case HeroType::Magical:
		damageToDo = _enemy.getHp() + _enemy.getMagicalResistance() - getMagicalItem()->getItemMagic();
		if (damageToDo>0)
		{
			_enemy.setHp(damageToDo);
		}
		break;
	case HeroType::Phisical:
		damageToDo = _enemy.getHp() - getMagicalItem()->getItemMagic();
		if (damageToDo>0)
		{
			_enemy.setHp(damageToDo);
		}
		break;
	default: break;
	}

	if (getHp()!=100)
	{
		setHp(getHp() + 10);
	}
}

Wizard::Wizard(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, MagicialItem* _item)
	: Magician(_damege, _defence, _magicalResistance, _move, _attackdistance, _Hp, _id, _item)
{
}

Wizard::~Wizard()
{
}
