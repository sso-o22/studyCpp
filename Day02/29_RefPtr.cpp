#include <iostream>
using namespace std;

int main()
{
	int num = 12;
	int *ptr = &num;  // �����ͺ��� ����(�ּҰ� ������� �� ����) / num�� �ּҰ��� ptr�� ����
	int **dptr = &ptr;  // ���� �����ͺ��� ���� / ptr(�����ͺ���)�� �ּҰ��� dptr�� ����(ptr�� �����ͺ����̹Ƿ� ���������ͺ���)

	int &ref = num;  // �����ں��� ���� / num��� ref��� �̸����� ������ �� �ֵ���(��Ī)
	int *(&pref) = ptr;  // �����ڸ� ����µ� �����ͺ��� Ÿ������ ����(ptr�� �ּ��̹Ƿ�) / pref��� �̸����� ������ �� �ֵ���
	int **(&dpref) = dptr;  // ���������� ������ �����ϴ� ������ ���� / dpref��� �̸����� ������ �� �ֵ���
	
	// �����ڴ� ���� �����ϴ� ������ Ÿ�Կ� ���߸� ��

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

	return 0;
}