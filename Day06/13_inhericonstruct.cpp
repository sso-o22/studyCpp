#include <iostream>
using namespace std;

class Super
{
public:
	Super()  // ������
	{
		cout << "Super()" << endl;
	}
	~Super()  // �Ҹ��� 
	{
		cout << "~Super()" << endl;
	}
};

class Sub : public Super  // Super�� ����� �޴� Sub Ŭ����
{
public:
	Sub()  // ������
	{
		cout << "Sub()" << endl;
	}
	~Sub()  // �Ҹ���
	{
		cout << "~Sub()" << endl;
	}
};

int main()
{
	cout << "Start" << endl;
	Sub obj;  // Sub Ŭ������ ��ü ����
	cout << "Stop" << endl;


	return 0;
}