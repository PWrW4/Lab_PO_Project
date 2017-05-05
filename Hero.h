#pragma once
#include <string>
#include "Header.h"

enum class HeroType
{
	Phisical,
	Magical
};

class Hero
{
	std::string symbol;
	int id;
	int hp;
	int damage;
	int defence;
	int magicalResistance;
	int movePoints;
	int attackDistance;
	HeroType heroType;
	
public:
	//constructors
	Hero(int _damege, int _defence,int _magicalResistance, int _move, int _attackdistance, int _Hp , int _id);
	Hero();

	//geters && setters
	void setId(int _setTo);
	void setHp(int _setTo);
	void setDamage(int _setTo);
	void setDefence(int _setTo);
	void setMagicalResistance(int _setTo);
	void setMovePoints(int _setTo);
	void setAttackDistance(int _setTo);
	void setHeroType(HeroType _h);
	void setSymbol(string _setTo);

	int getId() const;
	int getHp() const;
	int getDamage() const;
	int getDefence() const;
	int getMagicalResistance() const;
	int getMovePoints() const;
	int getAttackDistance() const;
	HeroType getHeroType() const;
	string setSymbol() const;


	virtual void Attack(Hero &_enemy) = 0;

	virtual ~Hero();
};

