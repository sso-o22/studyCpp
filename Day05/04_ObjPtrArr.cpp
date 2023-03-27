#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];  // �޸� ���� �Ҵ�
		strcpy(name, myname);
		age = myage;
	}
	Person() // ������
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(char* myname, int myage)
	{
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << ", ";
		cout << "����: " << age << endl;
	}
	~Person()  // �Ҹ���
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person* parr[3];  // �����͹迭 ����
	char namestr[100];
	int age;

	for (int i = 1; i < 3; i++)
	{
		cout << "�̸�: ";
		cin >> namestr;
		cout << "����: ";
		cin >> age;
		parr[i] = new Person(namestr, age);  // ��ü ����
	}

	parr[0]->ShowPersonInfo();  // ��ü�����ͷ� �żҵ忡 ������ �� '->' ���
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();
	delete parr[0];
	delete parr[1];
	delete parr[2];

	return 0;
};