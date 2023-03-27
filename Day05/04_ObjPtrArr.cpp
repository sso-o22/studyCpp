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
		name = new char[len];  // 메모리 동적 할당
		strcpy(name, myname);
		age = myage;
	}
	Person() // 생성자
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
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;
	}
	~Person()  // 소멸자
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person* parr[3];  // 포인터배열 선언
	char namestr[100];
	int age;

	for (int i = 1; i < 3; i++)
	{
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;
		parr[i] = new Person(namestr, age);  // 객체 생성
	}

	parr[0]->ShowPersonInfo();  // 객체포인터로 매소드에 접근할 때 '->' 사용
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();
	delete parr[0];
	delete parr[1];
	delete parr[2];

	return 0;
};