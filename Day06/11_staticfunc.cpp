#include <iostream>
using namespace std;

class StaticTest
{
private:
	static int a;  // static 멤버변수
	int b;
public:
	StaticTest();  // 생성자
	static void setData(int aa);
	void print();
};
int StaticTest::a = 10;  // static 멤버변수 초기화

StaticTest::StaticTest()
{
	this->b = 20;  // this = 객체 자신
}

void StaticTest::setData(int aa)
{
//	this->a = 30;  // static 멤버변수는 클래스 소속! 객체를 나타내는 this로 접근 불가능
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