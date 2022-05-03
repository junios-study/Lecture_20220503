#include "Common.h"
#include "Draw.h"

using namespace std;


void Draw()
{
	cout << "Player" << '\t' << "  AI" << endl;
	for (int i = 0; i < 4; ++i)
	{
		int Type = SplitCard[i] / 13;
		int Number = SplitCard[i] % 13;

		switch (Type)
		{
		case 0:
			cout << "¢¾";
			break;
		case 1:
			cout << "¢¼";
			break;
		case 2:
			cout << "¢À";
			break;
		case 3:
			cout << "¡ß";
			break;
		}

		switch (Number)
		{
		case 12:
			cout << "K" << " ";
			break;
		case 11:
			cout << "Q" << " ";
			break;
		case 10:
			cout << "J" << " ";
			break;
		case 0:
			cout << "A" << " ";
			break;
		default:
			cout << Number + 1 << " ";
			break;
		}

		cout << ((i % 2 == 0) ? '\t' : '\n');
	}

}

