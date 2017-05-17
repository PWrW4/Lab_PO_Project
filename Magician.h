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

	Magician(MagicialItem * _item);
	~Magician();
};

