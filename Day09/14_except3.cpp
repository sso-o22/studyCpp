#include <iostream>
using namespace std;

void divide(int a, int b)
{
	int c, d;
	try
	{
		if (b == 0) throw b;  // ���ܰ� �߻��ϸ�

		c = a / b;
		cout << "���� " << c << "�Դϴ�." << endl;
		d = a % b;
		cout << "�������� " << d << "�Դϴ�." << endl << endl;
	}
	catch (int ex)
	{
		cout << ex << "�� ���� �� �����ϴ�. ���ܹ߻�" << endl;
	}
}

int main()
{
//  �Լ� ȣ��
	divide(10, 3);
	divide(100, 5);
	divide(3, 0);

	cout << "���ܰ� �߻��ص� ��������!!!" << endl;

	return 0;
}