#include <iostream>
using namespace std;

void divide(int a, int b)
{
	int c, d;
	try
	{
		if (b == 0) throw b;  // 예외가 발생하면

		c = a / b;
		cout << "몫은 " << c << "입니다." << endl;
		d = a % b;
		cout << "나머지는 " << d << "입니다." << endl << endl;
	}
	catch (int ex)
	{
		cout << ex << "로 나눌 수 없습니다. 예외발생" << endl;
	}
}

int main()
{
//  함수 호출
	divide(10, 3);
	divide(100, 5);
	divide(3, 0);

	cout << "예외가 발생해도 정상종료!!!" << endl;

	return 0;
}