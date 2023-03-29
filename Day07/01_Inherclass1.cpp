#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:  // ���� ���� ������
	char name[30];
	int age;
public:
	Person(const char*, int);  // ������ ����ֱ� ���� ������ ����� (Ŭ���� �̸��� �Ȱ���, Ÿ�Ը� ��� ��)
	void getData();  // �Ϲ� �Լ��̹Ƿ� '��� �̸� (�Է�);'
};

// Person�� Ư�� ������ �����鼭 Student Ư�� ������ ������ -> �л��̴�
// �ڽ� Ŭ������ �� ���� Ư¡ ������ ����
// ������ �θ� Ŭ������ ŭ

class Student : public Person  // Person�� ��� ����
{
private:
	int studentID;
public:
	Student(const char*, int, int);  // ������
	// ��Ӱ��迡�� �Լ� �̸� ���Ƶ� �� -> �Լ� �������̵� (���� �ȹ�����Ƿ� �ٸ��� ����)
	void ShowData();  // �̸� ���� �Ű����� �ٸ��� -> �Լ� �����ε�
};

Person::Person(const char* aname, int aage)  // ������
{
	strcpy(name, aname);
	age = aage;
}

Student::Student(const char* aname, int aage, int astudentID) : Person(aname, aage)
{
	studentID = astudentID;
}

// �޸� ���� �Ҵ� ���� ���� ���ÿ� ����
void Person::getData()
{
	cout << "�̸�: " << name << " " << "����: " << age << " ";
}

void Student::ShowData()
{
	getData();
	cout << "�й�: "<< studentID << endl;	
}


int main()
{
	Student m1("�ּ���", 26, 1722507);
	m1.ShowData();

	return 0;
}