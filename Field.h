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
	int moveCost;
	Hero * HeroOnThisField;
public:
	Field();
	~Field();
};

