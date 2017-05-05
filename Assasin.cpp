#include "Assasin.h"


void Assasin::worriorAttack(Hero& _enemy)
{
	int damageToDo = 0;
	switch (getHeroType())
	{
	case HeroType::Magical :
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

void Assasin::specialAttack(Hero& _enemy)
{
	worriorAttack(_enemy);
}

Assasin::Assasin(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, Weapon* _weapon)
	: Worrior(_damege, _defence, _magicalResistance, _move, _attackdistance, _Hp, _id, _weapon)
{
}

Assasin::~Assasin()
{
}
