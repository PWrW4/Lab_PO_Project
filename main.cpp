#include "Header.h"
#include "World.h"

int main()
{
	srand(time(NULL));
	
	World * W = new World();
	
	W->PrepereGame();
	W->drawMap();

	getchar();
	return 0;
}