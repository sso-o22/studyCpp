#include <stdio.h>

int g = 0;  // 전역변수
void func()
{
	printf("func() : %p\n", func);
}

int main()
{
	int n = 10;  // 메인함수에 소속되어있는 지역변수
	static int c;
	const int d = 10;  // stack 영역에 할당
	char ary[10] = "hi";  // 지역 형태의 배열, stack 영역에 할당

	func();
	printf("local n : %p\n", &n);
	printf("global g : %p\n", &g);
	printf("static c : %p\n", &c);
	printf("const d : &p\n", &d);  // 동일한 메모리에 할당(뒤에 두글자 빼고 똑같음)
	printf("array : &p\n", ary);  // 동일한 메모리에 할당(뒤에 두글자 빼고 똑같음)

	return 0;
}

/*
메모리 영역은 크게 나누면
1. 코드 세그먼트 : 명령어들(함수)이 위치함 
2. 데이터 세그먼트
	- 동적 : 상수, 리터럴 / 프로그램 시작과 동시에 할당
	- 정적
	지역변수는 stack 제일 위쪽에 위치
*/