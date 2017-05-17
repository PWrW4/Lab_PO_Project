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
	int x, y;
public:
	//constructors
	Field(int _x, int _y);
	~Field();

	Hero * getHero() const;
	void setHero(Hero* _hero);

	int getX() const;
	int getY() const;

	void FieldDoMagic(int &_temp_move) const;
};

