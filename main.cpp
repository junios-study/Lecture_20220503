#include <iostream>

using namespace std;

#define MAX 52

//Heart A           0 - 12    0
//Spade A           13 - 25   1
//Clubs A          26 - 38   2
//Diamond A         39 - 51   3
int A[MAX] = { 0, };
int SplitCard[52] = { 0, };

void Initialize();


//declaration
void Shuffle();

void Split();

void Draw();


int main()
{

	Initialize();

	Shuffle();

	Split();

	Draw();

	return 0;
}

void Initialize()
{
	srand((unsigned int)time(0));

	for (int i = 0; i < MAX; ++i)
	{
		A[i] = i;
	}
}

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

void Split()
{
	for (int i = 0; i < 4; ++i)
	{
		SplitCard[i] = A[i];
	}
}


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
