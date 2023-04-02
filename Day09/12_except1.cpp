#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cout << "피젯수를 입력하세요: ";
	cin >> a;
	cout << "젯수를 입력하세요: ";
	cin >> b;

	try  // zero division 예외처리
	{
		if (b == 0) throw b;  // 예외가 발생하면

		c = a / b;
		cout << "몫은 " << c << "입니다." << endl;
		d = a % b;
		cout << "나머지는 " << d << "입니다." << endl;
	}
	catch (int ex)
	{
		cout << ex << "로 나눌 수 없습니다. 예외발생" << endl;
	}
	cout << "예외가 발생해도 정상종료!!!" << endl;
	
	return 0;
}