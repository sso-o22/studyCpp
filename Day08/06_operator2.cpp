#include <iostream>
using namespace std;

class Myclass
{
private:
	int value;
public:
	Myclass(int avalue) : value(avalue) { }

	// �Ű������� ��ü�� ����� ���� ���� ���·�!
	// -> ��ü ���·� ����ϸ� ���ѹݺ� �Ͼ
	Myclass operator+(const Myclass& other) const  // ��µ� ��ü Ÿ���̿��� �� : void(x) -> Myclass 
	{
		return Myclass(value + other.value);
	}

	void print()
	{
		cout << value << endl;
	}
};

int main()
{
	Myclass a(10);
	a.print();

	Myclass b(a);
	b.print();

	Myclass c = b;
	c.print();

	Myclass d = a + b + c; // ��ü�� ���ϱ� ������ �Ұ��� -> ������ �����ε����� ��� �������
	d.print();

	return 0;
}