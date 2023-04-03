// #author �ּ���

#include <iostream>
#include "Calculator.h"
using namespace std;

// ����Լ� ���� 'Calculator::' -> Calculator Ŭ���� �Ҽ��̶�� �� ǥ��
double Calculator::Calculate(double x, char cper, double y)
{
	switch (cper)  // �Է¹��� ����(+, -, *, /)�� �´� �������� switch�� ���
	{
	case '+':
		add(x, y);  // add �Լ� ȣ��
		break;
	case '-':
		sub(x, y);  // sub �Լ� ȣ��
		break;
	case '*':
		mul(x, y);  // mul �Լ� ȣ��
		break;
	case '/':
		div(x, y);  // div �Լ� ȣ��
		break;
	default:
		return 0.0;
	}
}

// ����Լ� ����
double Calculator::add(double x, double y)  
{
	return x + y;  // ���� ��� �� ��ȯ
}
double Calculator::sub(double x, double y)
{
	return x - y;  // ���� ��� �� ��ȯ
}
double Calculator::mul(double x, double y)
{
	return x * y;  // ���� ��� �� ��ȯ 
}
double Calculator::div(double x, double y)
{
	return x / y;  // ������ ��� �� ��ȯ
}


