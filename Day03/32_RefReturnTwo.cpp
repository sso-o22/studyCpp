#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);  // num1�� num2�� ������ ������ ����

	num1 += 1;  // 3
	num2 += 100;  // num1, num2 �ٸ� �������� Ȯ���ϱ� ���� �ٸ� ���� ����
	cout << "num1: " << num1 << endl;  // 3
	cout << "num2: " << num2 << endl;  // 103

	return 0;
}