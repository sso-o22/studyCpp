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
	int num2 = RefRetFuncOne(num1);  // num1과 num2는 완전히 별개의 변수

	num1 += 1;  // 3
	num2 += 100;  // num1, num2 다른 변수임을 확인하기 위해 다른 연산 진행
	cout << "num1: " << num1 << endl;  // 3
	cout << "num2: " << num2 << endl;  // 103

	return 0;
}