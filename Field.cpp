#include "Field.h"


void Field::FieldDoMagic(int &_temp_move) const
{
	if (HeroOnThisField != NULL) 
		{
		switch (type)
		{
		case FieldType::Grassland:
			//none action
			break;
		case FieldType::Mountain:
			_temp_move = 0;
			break;
		case FieldType::Castle:
			HeroOnThisField->setHp(HeroOnThisField->getHp() + 5);
			break;
		default:
			cout << "field do magic error";
			break;
		}
	}
}

Field::Field()
{
	int r = rand() % 3;
	switch (r)
	{
	case 0:
		type = FieldType::Castle;
		break;
	case 1:
		type = FieldType::Grassland;
		break;
	case 2:
		type = FieldType::Mountain;
		break;
	default:
		cout << "field creation error";
		break;
	}
	HeroOnThisField = NULL;
}


Field::~Field()
{
}

Hero* Field::getHero() const
{
	return HeroOnThisField;
}

void Field::setHero(Hero* _hero)
{
	HeroOnThisField = _hero;
}
