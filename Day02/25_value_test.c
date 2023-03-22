//#include <iostream>
#include <stdio.h>

int main()
{
	/*
	int num = 10;  // 초기화
	int num1;  // 변수 선언
	num1 = 20;  // 대입
	num = 30;  // 값 변경
	printf("int 크기: %d\n", sizeof(int));

	char ch;  // 문자 타입 1byte
	printf("char 크기: %d\n", sizeof(char));

	double d = 3.14;  // 실수 타입
	printf("double 크기: %d\n", sizeof(double));
	*/

	char ch = 0x7f;  // 16진수 : 0~9, A(10), B(11), C(12), D(13), E(14), F(15) 
	                 // 0b 0111 1111 (8bit) - 8 4 2 1
	unsigned char ch1 = 0x7f;
	printf("ch: %x\t ch: %d\n", ch, ch);
	printf("ch1: %x\t ch: %d\n", ch1, ch1);

	char ch2 = 0x9f;  // signed : 9f(1001 1111) -> 최상위비트 = 1 -> 음수
	unsigned char uch2 = 0x9f;  // unsigned : 9f(1001 1111) 부호사용X -> 128+16+8+4+2+1=159
	printf("ch2: %x\t ch2: %d\n", ch2, ch2);
	printf("uch2: %x\t uch2: %d\n", uch2, uch2);
	                   
	uch2 = uch2 << 1;  // << : 비트연산자(uch2를 왼쪽으로 1비트 만큼 이동시킨다)
	                   // 0b 1001 1111 << 1 : 0b 1 0011 1110 -> 3 14 -> 3e
	ch2 = ch2 << 1;
	printf("uch2 << 1: %x\t ch2 << 1: %x\n\n", uch2, ch2);

	ch2 = 0x9f;
	uch2 = 0x9f;
	ch2 = ch2 >> 1;  // >> : 비트연산자(uch2를 오른쪽으로 1비트 만큼 이동시킨다)
	                 // 0b 1001 1111 >> 1 : 0b 0100 1111 1 -> 4 f -> 4f
	uch2 = uch2 >> 1;  // 0b 1001 1111 >> 1 : 0b 0100 1111 1 -> 최상위비트 = 0 -> 양수 ???
	printf("uch2 >> 1: %x\t ch2 >> 1: %x\n\n", uch2, ch2);

	return 0;
}

