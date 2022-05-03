#include <iostream>

using namespace std;

#define MAX 52


int main()
{
    int A[MAX] = { 0, };

    srand((unsigned int)time(0));

    for (int i = 0; i < MAX; ++i)
    {
        A[i] = i + 1;
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

    for (int i = 0; i < MAX; ++i)
    {
        cout << A[i] << ", ";
    }



	return 0;
} 

