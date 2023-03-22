#include <iostream>
using namespace std;  // 이름공간 std에 선언된 모든것에 대해 이름공간 지정 생략

int main(void)
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}