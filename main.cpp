#include <iostream>


//2 X 1 = 2
//2 X 2 = 4
//2 X 3 = 6
//...
//2 X 9 = 18
using namespace std;

int main()
{
	//int Number = 0;
	//{
	//	int Number = 1;
	//	{
	//		Number = 2;
	//		//cout << Number << endl;
	//	}

	//	cout << Number << endl;
	//}

	////cout << Number << endl;

	int X = 2;
	int Number = 0;

	cin >> X;

	for (int Number = 1; Number <= 9; ++Number)
	{
		cout << X << " X " << Number << " = " << (Number * X) << endl;
	}

	cout << Number << endl;


	return 0;
} 