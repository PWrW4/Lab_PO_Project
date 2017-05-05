#include "World.h"


void World::drawMap() const
{
	cout << "----------" << endl;
	for (int i=0;i<8;i++)
	{
		cout << "|";
		for (int j=0;j<8;j++)
		{
			std::cout << "x";
		}
		cout << "|" << endl;
	}
	cout << "----------" << endl;
}

Hero* World::CreateHero()
{

}

World::World()
{
}


World::~World()
{
}
