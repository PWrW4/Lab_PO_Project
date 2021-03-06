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
	bool empty;
public:
	//constructors
	Field(int _x, int _y);
	~Field();

	//getters & setters
	Hero * getHero() const;
	void setHero(Hero* _hero);
	void setEmpty(bool _e);
	bool getEmpty() const;
	FieldType getFieldType();

	int getX() const;
	int getY() const;

	void FieldDoMagic(int &_temp_move) const;
};

