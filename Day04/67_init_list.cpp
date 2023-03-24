/*
�ݷ��ʱ�ȭ�� �ʿ��� ���
1. ��� ��� ����, 2. ��ü ��� ����, 3. ���� ��� ����
*/

#include <iostream>
using namespace std;

class ConstSome
{
public:
	const int val;  // ��� ��� ����
	ConstSome(int n) : val(n) { }
	void printval()
	{
		cout << val << endl;
	}
};
class RefSome
{
public:
	int& ref;  // ���� ��� ����
	RefSome(int n) : ref(n) { }
	void printval()
	{
		cout << ref << endl;
	}
};
class Position
{
public:
	int x, y;
	Position(int ax, int ay)
	{
		x = ax;
		y = ay;
	}
};
class ObjSome
{
public:
	Position pos;  // ��ü ��� ����
	ObjSome(int ax, int ay) : pos(ax, ay) { }
	void printfval()
	{
		cout << pos.x << " " << pos.y << endl;
	}
};

int main()
{
	ConstSome c(10);
	c.printval();

	int n = 20;
	RefSome r(n);
	r.printval();

	ObjSome o(10, 20);
	o.printfval();
	return 0;
}