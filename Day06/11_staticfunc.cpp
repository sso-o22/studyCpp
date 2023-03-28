#include <iostream>
using namespace std;

class StaticTest
{
private:
	static int a;  // static �������
	int b;
public:
	StaticTest();  // ������
	static void setData(int aa);
	void print();
};
int StaticTest::a = 10;  // static ������� �ʱ�ȭ

StaticTest::StaticTest()
{
	this->b = 20;  // this = ��ü �ڽ�
}

void StaticTest::setData(int aa)
{
//	this->a = 30;  // static ��������� Ŭ���� �Ҽ�! ��ü�� ��Ÿ���� this�� ���� �Ұ���
	a = aa;
}
void StaticTest::print()
{
	cout << "a: " << a << ", " << "b: " << b << endl;
}

int main()
{
	StaticTest s1, s2;
	s1.print();
	s2.print();

	s1.setData(30);
	s1.print();
	s1.print();

	StaticTest::setData(100);
	s1.print();
	s2.print();

	return 0;
}