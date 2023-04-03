// #author 최수정

#pragma once

class Calculator  // 클래스 선언 
{
public:
	// 멤버함수 선언
	double Calculate(double x, char cper, double y);  // 변수 3개 : 계산할 숫자 2개, 연산자 입력받을 문자 1개

	double add(double x, double y);
	double sub(double x, double y);
	double mul(double x, double y);
	double div(double x, double y);
};