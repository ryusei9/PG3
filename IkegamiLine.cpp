#include "IkegamiLine.h"
#include <stdio.h>

IkegamiLine::IkegamiLine()
{
	name = "池上線";
	terminal = "五反田駅";
}

IkegamiLine::~IkegamiLine()
{
}

void IkegamiLine::MyName()
{
	printf("%sです\n", name);
}
