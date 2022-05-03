#include "Common.h"
#include "Initialize.h"
#include "Shuffle.h"
#include "Split.h"
#include "Draw.h"


int main()
{
	Initialize();

	Shuffle();

	Split();

	Draw();

	return 0;
}