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
	Person(const char* myname, int myage)  // 생성자
	{
		int len = strlen(myname) + 1;
		name = new char[len];  // 동적 할당
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()  // 소멸자
	{
		delete[]name;  // 메모리의 해제
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2 = man1;  // 디폴트 복사생성자에 의한 멤버 대 멤버 복사
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}