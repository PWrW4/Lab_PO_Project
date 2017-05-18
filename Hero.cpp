#include "Hero.h"


Hero::Hero(string S,int _damege, int _defence, int _magicalResistance, int _move, int _attackdistance, int _Hp, int _id)
{
	damage = _damege;
	defence = _defence;
	magicalResistance = _magicalResistance;
	movePoints = _move;
	hp = _Hp;
	attackDistance = _attackdistance;
	id = _id;
	symbol = S;
}


void Hero::setId(int _setTo)
{
	id = _setTo;
}

void Hero::setHp(int _setTo)
{
	hp = _setTo;
}

void Hero::setDamage(int _setTo)
{
	damage = _setTo;
}

void Hero::setDefence(int _setTo)
{
	defence = _setTo;
}

void Hero::setMagicalResistance(int _setTo)
{
	magicalResistance = _setTo;
}

void Hero::setMovePoints(int _setTo)
{
	movePoints = _setTo;
}

void Hero::setAttackDistance(int _setTo)
{
	attackDistance = _setTo;
}

void Hero::setHeroType(HeroType _h)
{
	heroType = _h;
}

void Hero::setSymbol(string _setTo)
{
	symbol = _setTo;
}

void Hero::setSpecialAttackChance(int _setTo)
{
	specialAttackChance = _setTo;
}

void Hero::setXY(int _x, int _y)
{
	X = _x;
	Y = _y;
}

int Hero::getId() const
{
	return id;
}

int Hero::getHp() const
{
	return hp;
}

int Hero::getDamage() const
{
	return damage;
}

int Hero::getDefence() const
{
	return defence;
}

int Hero::getMagicalResistance() const
{
	return magicalResistance;
}

int Hero::getMovePoints() const
{
	return movePoints;
}

int Hero::getAttackDistance() const
{
	return attackDistance;
}

HeroType Hero::getHeroType() const
{
	return heroType;
}

string Hero::getSymbol() const
{
	return symbol;
}

int Hero::getSpecialAttackChance() const
{
	return specialAttackChance;
}

int Hero::getX()
{
	return X;
}

int Hero::getY()
{
	return Y;
}

Hero::~Hero()
{
}
