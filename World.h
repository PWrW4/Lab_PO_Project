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

	//heroes move function
	void MoveHeroId(int _id);
	void SearchForEnemy(Hero* hero, int &move_points);
	void HeroMapMove(Hero * H);
	void DoMove();

	World();
	~World();
};