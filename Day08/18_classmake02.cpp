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
		this->name = new char[strlen(aname) + 1];  // 메모리 동적 할당
		strcpy(this->name, aname);  // 얕은복사 -> 깊은복사 : 복사 생성자를 통해 디버깅 에러 해결
		this->birthday = abirth;
	}
	Person(const Person& copy)  // 복사 생성자 (매개변수 참조 형태로!)
	{
		this->name = new char[strlen(copy.name) + 1];
		strcpy(this->name, copy.name);
		this->birthday = copy.birthday;
	}

	void showPerson()
	{
		cout << "이름: " << name << ", " << "생일: " << birthday << endl;
	}
	Person& operator=(Person& ref)  // 대입연산자 오버로딩
	{
		delete[] name;
		this->name = new char[strlen(ref.name) + 1];
		strcpy(this->name, ref.name);
		this->birthday = ref.birthday;
		return *this;
	}
	~Person()  // 소멸자
	{
		delete[] name;
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

	Person p4("강감찬", 20000101);
	p4 = p1;
	p4.showPerson();

	return 0;
}