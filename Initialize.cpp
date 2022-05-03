#include <iostream>
#include "Initialize.h"


void Initialize()
{
	srand((unsigned int)time(0));

	for (int i = 0; i < MAX; ++i)
	{
		A[i] = i;
	}
}