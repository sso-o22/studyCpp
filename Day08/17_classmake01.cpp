#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char name[30];
	int birthday;
public:
	Person(const char* aname, int abirth)  // ������
	{
		strcpy(name, aname);
		birthday = abirth;
	}
	~Person() { }  // �Ҹ���

	void showPerson()
	{
		cout << "�̸�: " << name << ", " << "����: " << birthday << endl;
	}
};



int main()
{
	Person p1("ȫ�浿", 19990909);
	p1.showPerson();

	Person p2(p1);
	p2.showPerson();

	Person p3 = p2;
	p3.showPerson();

	return 0;
}