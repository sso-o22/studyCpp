#include <iostream>
using namespace std;

class Myclass
{
	int num;
public:
	Myclass(int n) : num(n)  // ��������� �ƴ� (�Ű����� �������� �ƴϹǷ�)
	{
		cout << "������ ȣ��" << endl;
	}
	explicit Myclass(const Myclass& other)  // ��������� (�Ű����� �������·�!!)
	{
		cout << "��������� ȣ��" << endl;
		num = other.num;
	}
	void getData()
	{
		cout << num << endl;
	}
};


int main()
{
	Myclass m1(10);  // ������ ȣ�� / ��ü ���� 
//	Myclass m2 = m1;  // ��������� ȣ�� / int num2 = num1
	Myclass m3(m1);  // ��������� ȣ�� (������ �ʾƵ� ȣ�� ���� - default ���������)

	m1.getData();
//	m2.getData();
	m3.getData();
	return 0;
}