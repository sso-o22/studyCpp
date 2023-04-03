// #author 최수정

#include <iostream>
#include "Calculator.h"
using namespace std;

// 멤버함수 정의 'Calculator::' -> Calculator 클래스 소속이라는 것 표시
double Calculator::Calculate(double x, char cper, double y)
{
	switch (cper)  // 입력받은 문자(+, -, *, /)에 맞는 동작위해 switch문 사용
	{
	case '+':
		add(x, y);  // add 함수 호출
		break;
	case '-':
		sub(x, y);  // sub 함수 호출
		break;
	case '*':
		mul(x, y);  // mul 함수 호출
		break;
	case '/':
		div(x, y);  // div 함수 호출
		break;
	default:
		return 0.0;
	}
}

// 멤버함수 정의
double Calculator::add(double x, double y)  
{
	return x + y;  // 덧셈 결과 값 반환
}
double Calculator::sub(double x, double y)
{
	return x - y;  // 뺄셈 결과 값 반환
}
double Calculator::mul(double x, double y)
{
	return x * y;  // 곱셈 결과 값 반환 
}
double Calculator::div(double x, double y)
{
	return x / y;  // 나눗셈 결과 값 반환
}


