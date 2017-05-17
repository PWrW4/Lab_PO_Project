#include "Paladin.h"

void Paladin::magicianAttack(Hero& _enemy)
{
	int damageToDo = 0;
	switch (getHeroType())
	{
	case HeroType::Magical:
		damageToDo = _enemy.getHp() + _enemy.getMagicalResistance() - (getDamage()*0.5) - getMagicalItem()->getItemMagic();
		if (damageToDo>0)
		{
			_enemy.setHp(_enemy.getHp()-damageToDo);
		}
		break;
	case HeroType::Phisical:
		damageToDo = _enemy.getHp() - getMagicalItem()->getItemMagic();
		if (damageToDo>0)
		{
			_enemy.setHp(_enemy.getHp() - damageToDo);
		}
		break;
	default: break;
	}

	if (getHp() < 100)
	{
		if (getHp()<80)
		{
			setHp(getHp() + 20);
		}
		else
		{
			setHp(100);
		}
	}
}


Paladin::Paladin(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, MagicialItem* _item)
	: Magician(_item), Hero(_damege, _defence, _magicalResistance, _move, _attackdistance, _Hp, _id)
{
}

Paladin::~Paladin()
{
}