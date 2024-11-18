#include "TamagawaLine.h"
#include <stdio.h>

TamagawaLine::TamagawaLine()
{
	name = "多摩川線";
	terminal = "多摩川駅";
}

TamagawaLine::~TamagawaLine()
{
	
}

void TamagawaLine::MyName()
{
	printf("%sです\n", name);
}
