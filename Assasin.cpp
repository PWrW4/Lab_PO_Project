#include "Assasin.h"




void Assasin::specialAttack(Hero& _enemy)
{
	_enemy.setHp(_enemy.getHp() - getDamage()-getWeapon()->getWeaponDamage());
}

Assasin::Assasin(string S,int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, Weapon* _weapon)
: Worrior(_weapon), Hero(S,_damege, _defence, _magicalResistance, _move, _attackdistance, _Hp, _id)
{
}

Assasin::~Assasin()
{
}
