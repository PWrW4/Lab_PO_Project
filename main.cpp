#include "Header.h"
#include "World.h"

int main()
{
	srand(time(NULL));
	
	World * W = new World();
	
	W->PrepereGame();
	do
	{
		W->drawMap();
		W->DoMove();
		getchar();
	}
	while (true);


	getchar();
	return 0;
}