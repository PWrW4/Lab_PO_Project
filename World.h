#pragma once
#include "Field.h"
#include "Header.h"

class World
{
	Field Map[8][8];
public:

	void drawMap() const;

	Hero * CreateHero();
	World();
	~World();
};

