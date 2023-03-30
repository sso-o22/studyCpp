#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char name[30];
	int birthday;
public:
	Person(const char* aname, int abirth)  // 积己磊
	{
		strcpy(name, aname);
		birthday = abirth;
	}
	~Person() { }  // 家戈磊

	void showPerson()
	{
		cout << "捞抚: " << name << ", " << "积老: " << birthday << endl;
	}
};



int main()
{
	Person p1("全辨悼", 19990909);
	p1.showPerson();

	Person p2(p1);
	p2.showPerson();

	Person p3 = p2;
	p3.showPerson();

	return 0;
}