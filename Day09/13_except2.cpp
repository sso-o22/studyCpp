#include <iostream>
using namespace std;

void divide(int a, int b)
{
	int c, d;
	if (b == 0) throw b;  // ���ܰ� �߻��ϸ�

	c = a / b;
	cout << "���� " << c << "�Դϴ�." << endl;
	d = a % b;
	cout << "�������� " << d << "�Դϴ�." << endl << endl;
}

int main()
{
	try
	{
        // �Լ� ȣ��
		divide(10, 3);
		divide(100, 5);
		divide(3, 0);
	}
	catch (int ex)
	{
		cout << ex << "�� ���� �� �����ϴ�. ���ܹ߻�" << endl;
	}
	cout << "���ܰ� �߻��ص� ��������!!!" << endl;

	return 0;
}