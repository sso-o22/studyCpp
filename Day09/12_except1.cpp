#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cout << "�������� �Է��ϼ���: ";
	cin >> a;
	cout << "������ �Է��ϼ���: ";
	cin >> b;

	try  // zero division ����ó��
	{
		if (b == 0) throw b;  // ���ܰ� �߻��ϸ�

		c = a / b;
		cout << "���� " << c << "�Դϴ�." << endl;
		d = a % b;
		cout << "�������� " << d << "�Դϴ�." << endl;
	}
	catch (int ex)
	{
		cout << ex << "�� ���� �� �����ϴ�. ���ܹ߻�" << endl;
	}
	cout << "���ܰ� �߻��ص� ��������!!!" << endl;
	
	return 0;
}