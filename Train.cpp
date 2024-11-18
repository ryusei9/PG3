#include "Train.h"
#include <stdio.h>

Train::Train()
{
}

Train::~Train()
{
	printf("終点は%sです\n\n", terminal);
}

void Train::MyName()
{
	printf("%sです\n", name);
}
