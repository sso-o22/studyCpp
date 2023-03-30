#include <iostream>
using namespace std;

class First
{
public:
	void FirstFunc() { cout << "FirstFunc()" << endl; }
	virtual void SimpleFunc() { cout << "First's SimpleFunc()" << endl; }
};

class Second : public First
{
public:
	void SecondFunc() { cout << "SecondFunc()" << endl; }
	virtual void SimpleFunc() { cout << "Second's SimpleFunc()" << endl; }
};

class Third : public Second
{
public:
	void ThirdFunc() { cout << "ThirdFunc()" << endl; }
	virtual void SimpleFunc() { cout << "Third's SimpleFunc()" << endl; }
};

int main()
{
	Third obj;
	obj.FirstFunc();  // 간접상속
	obj.SecondFunc();  // 상속
	obj.ThirdFunc();
	obj.SimpleFunc();  // SimpleFunc는 가상함수이므로 Third's SimpleFunc() 출력

	Second& sref = obj;  // 참조 - obj는 Third 타입
	sref.FirstFunc();
	sref.SecondFunc();
	sref.SimpleFunc();  // SimpleFunc는 가상함수이므로(객체타입 중심으로 됨) Third's SimpleFunc() 출력

	First& fref = obj;
	fref.FirstFunc();
	fref.SimpleFunc();  // SimpleFunc는 가상함수이므로(객체타입 중심으로 됨) Third's SimpleFunc() 출력
	return 0;
}