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
	Third* tptr = new Third();  // Third -> Third (������ ��ü ����Ŵ)
	Second* sptr = tptr;  // Third ����Ŵ
	First* fptr = sptr;  // Third ����Ŵ

	fptr->MyFunc();  // ��ü ���������� ���� (������ Ÿ�Կ� ����)
	sptr->MyFunc();  // ��ü ���������� ���� (������ Ÿ�Կ� ����)
	tptr->MyFunc();  // ��ü ���������� ���� (������ Ÿ�Կ� ����)
	delete tptr;
	return 0;
}