#include <iostream>
using namespace std;

int& RefRetFuncOne(int &ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);  // �Լ� ȣ��

	num1++;  // 3
	num2++;  // num2�� �ᱹ num1 -> 4
	cout << "num1: " << num1 << endl;  // 4
	cout << "num2: " << num2 << endl;  // 4

	return 0;
}