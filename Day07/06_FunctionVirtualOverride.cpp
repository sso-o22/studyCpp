#include <iostream>
using namespace std;

class First
{
public:
	virtual void MyFunc() { cout << "FirstFunc" << endl; }  
};

class Second : public First
{
public:
	virtual void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second
{
public:
	virtual void MyFunc() { cout << "ThirdFunc" << endl; }
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