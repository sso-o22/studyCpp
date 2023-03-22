#include <stdio.h>  // C 소스의 헤더파일

int main()
{
	// int num = 10;
	// printf("num: %d\n", num);

	// num = 20;
	// printf("num: %d\n", num);
	/*
	const int num = 20;  // 상수화 동시에 초기화
	printf("num: %d\n", num);

	// num = 30;  // 상수값이므로 변경 불가능
	//printf("num: %d\n", num);

	int* p = &num;  // * : 그냥 기호임, 의미X / 주소를 저장하는 변수 선언(포인터 변수), &(주소연산자)
	printf("p에 저장된 값: %p\n", p);
	printf("p가 참조하는 값: %d\n", *p);
	*p = 100;  // * : 간접 참조 연산자 / 주소가 가리키는 곳에 값을 참조해라
	printf("p가 가리키는 곳의 데이터값: %d\n", *p);
	printf("num: %d\n", num);
	*/

	const int num = 10;
	//num = 100;
	//int* p = &num;
	printf("num: %d\n", num);
	int* p = &num;

	*p = 100;
	printf("num: %d\n", num);

	int num1 = 100;
	int num2 = 200;
	const int* pa = &num1;  // 포인터변수 pa 선언 / 포인터변수의 데이터값을 상수화
	printf("pa: %p\n", pa);
	pa = &num2;
	printf("변경 후 pa: %p\n", pa);  // 상수화 시켜놨는데도 값 변경됨

	//*pa = 50;  // 에러 -> 간접참조연산자 변경 불가능

	int* const pb = &num1; // 포인터변수를 상수화
	//pb = &num2;  // 포인터변수를 상수화 시켰으므로 변경 불가능
	*pb = 70;  // 데이터 변경은 가능

	return 0;
}