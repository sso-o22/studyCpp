// #author 최수정

#include <iostream>
#include "Calculator_v1.h"
#include <string>
using namespace std;
// string str 변수 하나에 "a+b" 형태로 받아서 처리
int main()
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char cper = '+';

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	cout << "Press \"ctrl + c\" to exit the program" << endl;

	Calculator c;  // 객체 생성
	while (true)
	{
		cout << endl << "input >> ";
		cin >> x >> cper >> y;
		if (cper == '/' && y == 0)
		{
			cout << "Attempted to divide by zero!" << endl;
			continue;
		}
		else
		{
			result = c.Calculate(x, cper, y);
		}
		cout << "= " << result << endl;
	}

	return 0;
}