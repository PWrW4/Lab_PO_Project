#include "World.h"
#include "Assasin.h"
#include "Knight.h"
#include "Wizard.h"
#include "Paladin.h"


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
				cout << Map[i][j]->getHero()->getSymbol();
			}
			else
			{
				switch (Map[i][j]->getFieldType())
				{
				case FieldType::Grassland:
					cout << "_";
					break;
				case FieldType::Mountain:
					cout << "^";
					break;
				case FieldType::Castle:
					cout << "#";
					break;
				}
			}

		}
		cout << "|" << endl;
	}
	cout << "----------" << endl;
	for (int i = 0; i < 4; i++) {
		if (Heroes[i]->getHp()!=(-999))
		{
			cout << Heroes[i]->getSymbol() << " HP:" << Heroes[i]->getHp() << " X:" << Heroes[i]->getX() << " Y:" << Heroes[i]->getY() << endl;
		}
	}

}

Hero* World::CreateHero()
{
	Hero * HeroToTeturn;
	int r =rand() % 4 + 1;
	switch (r)
	{
	case 1:
		HeroToTeturn = new Assasin("A",20, 5, 4, 3, 1, 100, id_literator, new Weapon(10));
		break;
	case 2:
		HeroToTeturn = new Knight("K",25, 10, 2, 2, 1, 100, id_literator, new Weapon(5));
		break;
	case 3:
		HeroToTeturn = new Wizard("W", 20, 10, 15, 2, 2, 100, id_literator, new MagicialItem(15));
		break;
	case 4:
		HeroToTeturn = new Paladin("P", 15, 15, 20, 4, 4, 100, id_literator, new MagicialItem(10));
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
	for (int i=0;i<4;i++)
	{
		if (Heroes[i]->getId()==_id)
		{
			int r = rand() % 4 + 1;
			switch (r)
			{
			case 1:
				if ((Heroes[i]->getX() + 1) > 7)
				{
					break;
				}
				else
				{
					if (Map[Heroes[i]->getX() + 1][Heroes[i]->getY()]->getEmpty())
					{
						Map[Heroes[i]->getX()][Heroes[i]->getY()]->setEmpty(true);
						Map[Heroes[i]->getX() + 1][Heroes[i]->getY()]->setHero(Heroes[i]);
					}
				}
				break;
			case 2:
				if ((Heroes[i]->getY() + 1) > 7)
				{
					break;
				}
				else
				{
					if (Map[Heroes[i]->getX()][Heroes[i]->getY() + 1]->getEmpty())
					{
						Map[Heroes[i]->getX()][Heroes[i]->getY()]->setEmpty(true);
						Map[Heroes[i]->getX()][Heroes[i]->getY() + 1]->setHero(Heroes[i]);
					}
				}
				break;
			case 3:
				if ((Heroes[i]->getX() - 1) < 0)
				{
					break;
				}
				else
				{
					if (Map[Heroes[i]->getX() - 1][Heroes[i]->getY()]->getEmpty())
					{
						Map[Heroes[i]->getX()][Heroes[i]->getY()]->setEmpty(true);
						Map[Heroes[i]->getX() - 1][Heroes[i]->getY()]->setHero(Heroes[i]);
					}
				}
				break;
			case 4:
				if ((Heroes[i]->getY() - 1) < 0)
				{
					break;
				}
				else
				{
					if (Map[Heroes[i]->getX()][Heroes[i]->getY() - 1]->getEmpty())
					{
						Map[Heroes[i]->getX()][Heroes[i]->getY()]->setEmpty(true);
						Map[Heroes[i]->getX()][Heroes[i]->getY() - 1]->setHero(Heroes[i]);
					}
				}
				break;
			default:
				std::cout << "rand mapMoveError";
				break;
			}
		}
	}
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
		Map[H->getX()][H->getY()]->FieldDoMagic(_movePoints);
	} while (_movePoints > 0);
}


void World::SearchForEnemy(Hero* hero, int& move_points)
{
	if (move_points>0)
	{
		for (int HeroRange = hero->getAttackDistance(); HeroRange >= 1; HeroRange--)
		{
			if (hero->getX() + HeroRange < 8)
			{
				if (!Map[hero->getX() + HeroRange][hero->getY()]->getEmpty())
				{
					hero->Attack(*Map[hero->getX() + HeroRange][hero->getY()]->getHero());
					move_points--;
					if (hero->getHeroType() == HeroType::Magical)
					{
						MoveHeroId(hero->getId());
					}
					break;
				}
			}
			if (hero->getY() + HeroRange < 8)
			{
				if (!Map[hero->getX()][hero->getY() + HeroRange]->getEmpty())
				{
					hero->Attack(*Map[hero->getX()][hero->getY() + HeroRange]->getHero());
					move_points--;
					if (hero->getHeroType() == HeroType::Magical)
					{
						MoveHeroId(hero->getId());
					}
					break;
				}
			}
			if (hero->getX() - HeroRange  > -1)
			{
				if (!Map[hero->getX() - HeroRange][hero->getY()]->getEmpty())
				{
					hero->Attack(*Map[hero->getX() - HeroRange][hero->getY()]->getHero());
					move_points--;
					if (hero->getHeroType() == HeroType::Magical)
					{
						MoveHeroId(hero->getId());
					}
					break;
				}
			}
			if (hero->getY() - HeroRange > -1)
			{
				if (!Map[hero->getX()][hero->getY() - HeroRange]->getEmpty())
				{
					hero->Attack(*Map[hero->getX()][hero->getY() - HeroRange]->getHero());
					move_points--;
					if (hero->getHeroType()==HeroType::Magical)
					{
						MoveHeroId(hero->getId());
					}
					break;
				}
			}
		}
	}
}

void World::DoMove()
{
	for (int i = 0; i < 4; i++)
	{
		if (Heroes[i]->getHp()>0)
		{
			HeroMapMove(Heroes[i]);
		}
		else
		{
			if (Heroes[i]->getHp()!=(-999))
			{
				Map[Heroes[i]->getX()][Heroes[i]->getY()]->setEmpty(true);
				Heroes[i]->setHp(-999);
			}
		}
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
