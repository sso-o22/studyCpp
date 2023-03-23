/*
사용자 정의 자료형인 구조체 : C
*/
//#include <iostream>
#include <stdio.h>
using namespace std;

struct human  // 이 상태로는 메모리에 할당 안됨 -> 구조체변수 선언해야 함.
{
	// 멤버 변수만 넣을 수 있음
	char name[20];
	int age;
};

int main()
{
	// char h;
	struct human h = { "홍길동", 23 };  // 구조체 human 타입의 구조체변수 h 선언

	printf("이름: %s\n", h.name);
	printf("나이: %d\n", h.age);

	
	return 0;
}