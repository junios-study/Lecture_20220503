#include <iostream>

using namespace std;

int main()
{
	//�� ��ȯ
	int A = 0;
	float B = 1.0f;
	B = (float)A; // ���α׷����� ������ ǥ��
	A = (int)B;
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < 10; ++i)
	{
		cout << rand() << endl;
	}
	


	return 0;
} 