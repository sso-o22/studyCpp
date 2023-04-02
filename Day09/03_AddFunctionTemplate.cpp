#include <iostream>
using namespace std;

template <typename T>  // 함수 템플릿
T Add(T num1, T num2)  // 자료형이 T -> 대표 자료형 (int, double ... 다 들어올 수 있다)
{
	return num1 + num2;
}

int main()
{
	cout << Add<int>(15, 20) << endl;
	cout << Add<double>(2.9, 3.7) << endl;
	cout << Add<int>(3.2, 3.2) << endl;
	cout << Add<double>(3.14, 2.75) << endl;
	return 0;
}