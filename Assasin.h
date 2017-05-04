#pragma once
#include "Worrior.h"
class Assasin : virtual	public Worrior
{
public:
	Assasin(int _damege, int _defence, int _move, int _attackdistance, int _Hp, int _id);
	~Assasin();
};

