#include <iostream>
using namespace std;
//#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

class Human
{
private:
	char name[20];  // 배열 선언과 동시에 초기화 가능
	int id;
	int age;
public:
	Human(const char aname[20], int aid, int aage)  // 생성자
	{
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	/*
	void setData(const char aname[20], int aid, int aage)
	{
		// name = "홍길동";
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	*/
	void getData()
	{
		cout << "이름: " << name << " " << "학번: " << id << " " << "나이: " << age << endl;
	}
};

int main()
{
//	Human h;
//	h.setData("홍길동", 182733, 30);

	Human h("홍길동", 182733, 30);
	h.getData();


	return 0;
}