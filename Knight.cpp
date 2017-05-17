#include "Knight.h"



void Knight::specialAttack(Hero& _enemy)
{
	_enemy.setHp(_enemy.getHp() +_enemy.getDefence() - getDamage() - 2*getWeapon()->getWeaponDamage());
}

Knight::Knight(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, Weapon* _weapon)
	: Worrior(_weapon), Hero(_damege, _defence, _magicalResistance, _move, _attackdistance, _Hp, _id)
{
}


Knight::~Knight()
{
}
