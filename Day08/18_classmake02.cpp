#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char* name;
	int birthday;
public:
	Person(const char* aname, int abirth)  // ������
	{
		name = new char[strlen(aname) + 1];  // �޸� ���� �Ҵ�
		strcpy(name, aname);
		birthday = abirth;
	}
	~Person()  // �Ҹ���
	{
		delete[] name;
	}
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