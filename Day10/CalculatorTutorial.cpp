// #author �ּ���

#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
	// ���� �ʱ�ȭ
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char cper = '+';

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	cout << "Press \"ctrl + c\" to exit the program" << endl;  // ū����ǥ ����Ϸ��� �տ� \���̱�
	
	Calculator c;  // ��ü ����
	while (true)
	{
		cout << endl << "input >> "; 
		cin >> x >> cper >> y;  // a+b | a-b | a*b | a/b ���·� �Է� ����
		if (cper == '/' && y == 0)  // zero division ����ó�� - ������ 0�̸� �����޼��� ���
		{
			cout << "Attempted to divide by zero!" << endl;
			continue;
		}
		else  // ������ 0�� �ƴϸ� Calculate �Լ� ����
		{
			result = c.Calculate(x, cper, y);
		}
		cout << "= " << result << endl;
	}
	return 0;
}