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
	cout << "Hero 0 HP:" << Heroes[0]->getHp() << endl;
	cout << "Hero 1 HP:" << Heroes[1]->getHp() << endl;
	cout << "Hero 2 HP:" << Heroes[2]->getHp() << endl;
	cout << "Hero 3 HP:" << Heroes[3]->getHp() << endl;
}

Hero* World::CreateHero()
{
	Hero * HeroToTeturn;
	int r = rand() % 4 + 1;
	switch (r)
	{
	case 1:
		HeroToTeturn = new Assasin(20, 5, 4, 3, 1, 100, id_literator, new Weapon(10));
		break;
	case 2:
		HeroToTeturn = new Knight(25, 10, 2, 2, 1, 100, id_literator, new Weapon(5));
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
	int _movePoints = H->getMovePoints();
	do
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
		_movePoints--;
		SearchForEnemy(H, _movePoints);
	} while (_movePoints > 0);
}


void World::SearchForEnemy(Hero* hero, int& move_points) const
{
	if (move_points>0)
	{
		for (int HeroRange = hero->getAttackDistance(); HeroRange >= 1; HeroRange--)
		{
			if (!Map[hero->getX() + HeroRange][hero->getY()]->getEmpty() && hero->getX() + HeroRange < 8)
			{
				hero->Attack(*Map[hero->getX() + HeroRange][hero->getY()]->getHero());
				move_points--;
				break;
			}
			if (!Map[hero->getX()][hero->getY() + HeroRange]->getEmpty() && hero->getY() + HeroRange < 8)
			{
				hero->Attack(*Map[hero->getX()][hero->getY() + HeroRange]->getHero());
				move_points--;
				break;
			}
			if (!Map[hero->getX() - HeroRange][hero->getY()]->getEmpty() && hero->getX() - HeroRange  > -1)
			{
				hero->Attack(*Map[hero->getX() - HeroRange][hero->getY()]->getHero());
				move_points--;
				break;
			}
			if (!Map[hero->getX()][hero->getY() - HeroRange]->getEmpty() && hero->getY() - HeroRange > -1)
			{
				hero->Attack(*Map[hero->getX()][hero->getY() - HeroRange]->getHero());
				move_points--;
				break;
			}
		}
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
