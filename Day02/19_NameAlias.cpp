#include <iostream>
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main(void)
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;  // ��Ī ����Ǳ� ���� num1, num2 ����

	namespace ABC = AAA::BBB::CCC;  // AAA::BBB::CCC�� ABC��� ��Ī �ο�
	cout<<ABC::num1 << endl;
	cout<<ABC::num2 << endl;  // ��Ī ���� ���� num1, num2 ����
	return 0;
}