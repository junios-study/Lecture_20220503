#include <iostream>

using namespace std;

int main()
{
	//형 변환
	int A = 0;
	float B = 1.0f;
	B = (float)A; // 프로그래머의 의지를 표명
	A = (int)B;
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < 10; ++i)
	{
		cout << rand() << endl;
	}
	


	return 0;
} 