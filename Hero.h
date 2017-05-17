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
	int specialAttackChance=50; //0-100
	int X, Y;
	
public:
	//constructors
	Hero(int _damege, int _defence,int _magicalResistance, int _move, int _attackdistance, int _Hp , int _id);

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
	void setSpecialAttackChance(int _setTo);
	void setXY(int _x,int _y);

	int getId() const;
	int getHp() const;
	int getDamage() const;
	int getDefence() const;
	int getMagicalResistance() const;
	int getMovePoints() const;
	int getAttackDistance() const;
	HeroType getHeroType() const;
	string setSymbol() const;
	int getSpecialAttackChance() const;
	int getX();
	int getY();

	virtual void Attack(Hero &_enemy) = 0;


	virtual ~Hero();
};

