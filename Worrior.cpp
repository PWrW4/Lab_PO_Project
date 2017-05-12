#include "Worrior.h"


void Worrior::worriorAttack(Hero& _enemy)
{
	if ((rand() % 100 + 1)<=getSpecialAttackChance())
	{
		int damageToDo = 0;
		switch (getHeroType())
		{
		case HeroType::Magical:
			damageToDo = _enemy.getHp() + _enemy.getMagicalResistance() - getDamage() - getWeapon()->getWeaponDamage();
			if (damageToDo>0)
			{
				_enemy.setHp(damageToDo);
			}
			break;
		case HeroType::Phisical:
			damageToDo = _enemy.getHp() + _enemy.getDefence() - getDamage() - getWeapon()->getWeaponDamage();
			if (damageToDo>0)
			{
				_enemy.setHp(damageToDo);
			}
			break;
		default: break;
		}
	}
	else
	{
		specialAttack(_enemy);
	}
	
}

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
}

Worrior::~Worrior()
{
}
