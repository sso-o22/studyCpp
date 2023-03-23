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
	int num2 = RefRetFuncOne(num1);  // 함수 호출

	num1++;  // 3
	num2++;  // num2가 결국 num1 -> 4
	cout << "num1: " << num1 << endl;  // 4
	cout << "num2: " << num2 << endl;  // 4

	return 0;
}