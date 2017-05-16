#pragma once
#include "Field.h"
#include "Header.h"


class World
{
	int id_literator;
	Field * Map[8][8];
	Hero * Heroes[4];
public:
	void PrepereGame();

	void drawMap() const;

	Hero * CreateHero();
	static void MoveHeroId(int _id);
	void HeroMapMove();
	World();
	~World();
};