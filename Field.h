#pragma once
#include "Hero.h"

enum class FieldType
{
	Grassland,
	Mountain,
	Castle,
};

class Field
{
	FieldType type;
	Hero * HeroOnThisField;
public:
	void FieldDoMagic(int &_temp_move) const;
	Field();
	~Field();
	Hero * getHero() const;
	void setHero(Hero* _hero);
};

