#include "World.h"
#include "Assasin.h"
#include "Knight.h"
#include "Wizard.h"


void World::PrepereGame()
{
	//generate Map
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			Map[i][j] = new Field(i, j);
		}
	}

	//creating Heroes
	for (int i = 0; i < 4; i++)
	{
		Heroes[i] = CreateHero();
	}

	//settingHeroOnMap
	Map[0][0]->setHero(Heroes[0]);
	Map[7][0]->setHero(Heroes[1]);
	Map[7][7]->setHero(Heroes[2]);
	Map[0][7]->setHero(Heroes[3]);
}

void World::drawMap() const
{
	system("cls");
	cout << "----------" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << "|";
		for (int j = 0; j < 8; j++)
		{
			if (!Map[i][j]->getEmpty())
			{
				cout << Map[i][j]->getHero()->getId();
			}
			else
			{
				cout << "X";
			}

		}
		cout << "|" << endl;
	}
	cout << "----------" << endl;
	cout << "Hero 0" << endl;
	cout << "Hero 1" << endl;
	cout << "Hero 2" << endl;
	cout << "Hero 3" << endl;
}

Hero* World::CreateHero()
{
	Hero * HeroToTeturn;
	int r = rand() % 4 + 1;
	switch (r)
	{
	case 1:
		HeroToTeturn = new Assasin(20, 5, 4, 3, 1, 100, id_literator, new Weapon(10, 1));
		break;
	case 2:
		HeroToTeturn = new Knight(25, 10, 2, 2, 1, 100, id_literator, new Weapon(5, 1));
		break;
	case 3:
		HeroToTeturn = new Wizard(20, 10, 15, 2, 2, 100, id_literator, new MagicialItem(15));
		break;
	case 4:
		HeroToTeturn = new Wizard(15, 15, 20, 4, 4, 100, id_literator, new MagicialItem(10));
		break;
	default:
		std::cout << "hero generator error 1";
		return nullptr;
		break;
	}
	id_literator++;
	return HeroToTeturn;
}

void World::MoveHeroId(int _id)
{

}

void World::HeroMapMove(Hero * H)
{
	int r = rand() % 4 + 1;

	switch (r)
	{
	case 1:
		if ((H->getX() + 1) > 7)
		{
			break;
		}
		else
		{
			if (Map[H->getX() + 1][H->getY()]->getEmpty())
			{
				Map[H->getX()][H->getY()]->setEmpty(true);
				Map[H->getX() + 1][H->getY()]->setHero(H);
			}
		}
		break;
	case 2:
		if ((H->getY() + 1) > 7)
		{
			break;
		}
		else
		{
			if (Map[H->getX()][H->getY() + 1]->getEmpty())
			{
				Map[H->getX()][H->getY()]->setEmpty(true);
				Map[H->getX()][H->getY() + 1]->setHero(H);
			}
		}
		break;
	case 3:
		if ((H->getX() - 1) < 0)
		{
			break;
		}
		else
		{
			if (Map[H->getX() - 1][H->getY()]->getEmpty())
			{
				Map[H->getX()][H->getY()]->setEmpty(true);
				Map[H->getX() - 1][H->getY()]->setHero(H);
			}
		}
		break;
	case 4:
		if ((H->getY() - 1) < 0)
		{
			break;
		}
		else
		{
			if (Map[H->getX()][H->getY() - 1]->getEmpty())
			{
				Map[H->getX()][H->getY()]->setEmpty(true);
				Map[H->getX()][H->getY() - 1]->setHero(H);
			}
		}
		break;
	default:
		std::cout << "rand mapMoveError";
		break;
	}
}

void World::DoMove()
{
	for (int i = 0; i < 4; i++)
	{
		HeroMapMove(Heroes[i]);
	}
}

//constructors
World::World()
{
	id_literator = 0;
}


World::~World()
{
}
