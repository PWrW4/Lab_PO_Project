#include "Assasin.h"




void Assasin::specialAttack(Hero& _enemy)
{
	_enemy.setHp(_enemy.getHp() - getDamage()-getWeapon()->getWeaponDamage());
}

Assasin::Assasin(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, Weapon* _weapon)
	: Worrior(_damege, _defence, _magicalResistance, _move, _attackdistance, _Hp, _id, _weapon)
{
}

Assasin::~Assasin()
{
}
