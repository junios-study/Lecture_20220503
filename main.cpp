#include <iostream>

using namespace std;

#define MAX 52

//Heart A           0 - 12    0
//Spade A           13 - 25   1
//Clover A          26 - 38   2
//Diamond A         39 - 51   3



int main()
{
    int A[MAX] = { 0, };
    int SplitCard[52];


    srand((unsigned int)time(0));

    //Initialize
    for (int i = 0; i < MAX; ++i)
    {
        A[i] = i;
    }

    //shuffle
    for (int i = 0; i < MAX * 2; ++i)
    {
        int FirstNumber = rand() % MAX;
        int SecondNumber = rand() % MAX;

        //Swap
        int Temp = A[FirstNumber];
        A[FirstNumber] = A[SecondNumber];
        A[SecondNumber] = Temp;
    }

    //split
    for (int i = 0; i < 2; ++i)
    {
        SplitCard[i] = A[i];
    }

    for (int i = 0; i < 2; ++i)
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
    }




	return 0;
} 

