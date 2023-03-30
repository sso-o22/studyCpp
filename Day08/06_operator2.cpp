#include <iostream>
using namespace std;

class Myclass
{
private:
	int value;
public:
	Myclass(int avalue) : value(avalue) { }

	// 매개변수를 객체로 사용할 때는 참조 형태로!
	// -> 객체 형태로 사용하면 무한반복 일어남
	Myclass operator+(const Myclass& other) const  // 출력도 객체 타입이여야 함 : void(x) -> Myclass 
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

	Myclass d = a + b + c; // 객체의 더하기 연산은 불가능 -> 연산자 오버로딩으로 기능 만들어줌
	d.print();

	return 0;
}