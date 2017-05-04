#pragma once
#include <string>


class Hero
{
	int id;
	int hp;
	int damage;
	int defence;
	int magicalResistance;
	int move;
	int attackDistance;
	
public:
	Hero(int _damege, int _defence,int _magicalResistance, int _move, int _attackdistance, int _Hp , int _id);
	
	virtual void Attack(Hero &_enemy) = 0;

	virtual ~Hero();
};

