#include "Wizard.h"
#include "World.h"


void Wizard::magicianAttack(Hero& _enemy)
{
	int damageToDo = 0;
	switch (getHeroType())
	{
	case HeroType::Magical:
		damageToDo = _enemy.getHp() + _enemy.getMagicalResistance() -(getDamage()*0.5) - getMagicalItem()->getItemMagic();
		if (damageToDo>0)
		{
			_enemy.setHp(_enemy.getHp() - damageToDo);
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
	World::MoveHeroId(getId());
}

Wizard::Wizard(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, MagicialItem* _item)
	: Magician(_damege, _defence, _magicalResistance, _move, _attackdistance, _Hp, _id, _item)
{
}

Wizard::~Wizard()
{
}
