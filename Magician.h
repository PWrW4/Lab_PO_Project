#pragma once
#include "Hero.h"
#include "MagicialItem.h"

class Magician : virtual public Hero
{
	MagicialItem * magicalItem;
	virtual void magicianAttack(Hero& _enemy) = 0;
public:
	//setters & getters
	void setMagicalItem(MagicialItem * _setTo);
	MagicialItem * getMagicalItem() const;


	void Attack(Hero &_enemy) override;

	Magician(int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id, MagicialItem * _item);
	~Magician();
};

