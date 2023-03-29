#include <iostream>
using namespace std;

class First
{
public:
	virtual void MyFunc() { cout << "FirstFunc" << endl; }  // 부모클래스에 virtual 붙이면 자식클래스 자동으로 가상함수됨
};

class Second : public First
{
public:
	void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second
{
public:
	void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main()
{
	Third* tptr = new Third();  // Third -> Third (동일한 객체 가리킴)
	Second* sptr = tptr;  // Third 가리킴
	First* fptr = sptr;  // Third 가리킴

	fptr->MyFunc();  // 객체 포인터형에 기준 (동일한 타입에 접근)
	sptr->MyFunc();  // 객체 포인터형에 기준 (동일한 타입에 접근)
	tptr->MyFunc();  // 객체 포인터형에 기준 (동일한 타입에 접근)
	delete tptr;
	return 0;
}