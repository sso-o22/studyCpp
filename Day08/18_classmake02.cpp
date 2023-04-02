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
		this->name = new char[strlen(aname) + 1];  // �޸� ���� �Ҵ�
		strcpy(this->name, aname);  // �������� -> �������� : ���� �����ڸ� ���� ����� ���� �ذ�
		this->birthday = abirth;
	}
	Person(const Person& copy)  // ���� ������ (�Ű����� ���� ���·�!)
	{
		this->name = new char[strlen(copy.name) + 1];
		strcpy(this->name, copy.name);
		this->birthday = copy.birthday;
	}

	void showPerson()
	{
		cout << "�̸�: " << name << ", " << "����: " << birthday << endl;
	}
	Person& operator=(Person& ref)  // ���Կ����� �����ε�
	{
		delete[] name;
		this->name = new char[strlen(ref.name) + 1];
		strcpy(this->name, ref.name);
		this->birthday = ref.birthday;
		return *this;
	}
	~Person()  // �Ҹ���
	{
		delete[] name;
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

	Person p4("������", 20000101);
	p4 = p1;
	p4.showPerson();

	return 0;
}