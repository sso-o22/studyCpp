// #author 최수정

#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
	// 변수 초기화
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char cper = '+';

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	cout << "Press \"ctrl + c\" to exit the program" << endl;  // 큰따옴표 출력하려면 앞에 \붙이기
	
	Calculator c;  // 객체 생성
	while (true)
	{
		cout << endl << "input >> "; 
		cin >> x >> cper >> y;  // a+b | a-b | a*b | a/b 형태로 입력 받음
		if (cper == '/' && y == 0)  // zero division 예외처리 - 나누기 0이면 에러메세지 출력
		{
			cout << "Attempted to divide by zero!" << endl;
			continue;
		}
		else  // 나누기 0이 아니면 Calculate 함수 실행
		{
			result = c.Calculate(x, cper, y);
		}
		cout << "= " << result << endl;
	}
	return 0;
}