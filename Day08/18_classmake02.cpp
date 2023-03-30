#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char* name;
	int birthday;
public:
	Person(const char* aname, int abirth)  // 생성자
	{
		name = new char[strlen(aname) + 1];  // 메모리 동적 할당
		strcpy(name, aname);
		birthday = abirth;
	}
	~Person()  // 소멸자
	{
		delete[] name;
	}
	void showPerson()
	{
		cout << "이름: " << name << ", " << "생일: " << birthday << endl;
	}
};


int main()
{
	Person p1("홍길동", 19990909);
	p1.showPerson();

	Person p2(p1);
	p2.showPerson();

	Person p3 = p2;
	p3.showPerson();

	return 0;
}