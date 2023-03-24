/*
콜론초기화가 필요한 경우
1. 상수 멤버 변수, 2. 객체 멤버 변수, 3. 참조 멤버 변수
*/

#include <iostream>
using namespace std;

class ConstSome
{
public:
	const int val;  // 상수 멤버 변수
	ConstSome(int n) : val(n) { }
	void printval()
	{
		cout << val << endl;
	}
};
class RefSome
{
public:
	int& ref;  // 참조 멤버 변수
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
	Position pos;  // 객체 멤버 변수
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