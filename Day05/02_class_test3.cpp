#include <iostream>
using namespace std;
//#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

class Human
{
private:
//	char name[20];  // 스택에 있던 것 힙 영역에 할당하기 (메모리 절약)
	char* name;
//	Human ary[10];  // 방 하나마다 휴먼타입의 객체 저장 가능
	int id;
	int age;
public:
	Human(const char *aname, int aid, int aage)  // 생성자
	{
		name = new char[strlen(aname) + 1]; // 메모리 동적 할당
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	~Human()  // 소멸자
	{
		delete[] name;
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

	Human hary[3] = { Human("김영희", 2, 23), Human("김철수", 3, 25), Human("아무개", 4, 35) };
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();

	return 0;
}