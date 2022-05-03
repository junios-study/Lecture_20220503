#include "Shuffle.h"

//implementation
void Shuffle()
{
	for (int i = 0; i < MAX * 2; ++i)
	{
		int FirstNumber = rand() % MAX;
		int SecondNumber = rand() % MAX;

		//Swap
		int Temp = A[FirstNumber];
		A[FirstNumber] = A[SecondNumber];
		A[SecondNumber] = Temp;
	}
}