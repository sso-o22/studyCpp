#include <iostream>
using namespace std;
#pragma warning(disable:4996)

class Myclass
{
private:
	int age;
	char id;
	char* name;

// 멤버함수(=메소드): 기능
public:
	Myclass(int mage, char mid, char* mname); // 생성자 원형
	void getData(); // 메소드 원형(선언)   
};

Myclass::Myclass(int mage, char mid, char* mname) : age(mage), id(mid) // 생성자 정의, 멤버 이니셜라이저를 이용한 멤버 초기화
{
	name = new char[10];
	strcpy(name, mname);
}

void Myclass::getData() // 메소드 정의
{
	cout << id << " " << name << " " << age << endl;
}

int main()
{
	Myclass sc1(25, 'W', "soojung");
	sc1.getData();

	return 0;
}