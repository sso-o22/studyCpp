//#include <iostream>
#include <stdio.h>

int main()
{
	int ary[5] = { 1, 2, 3, 4, 5 };  // 전체크기 : 20byte (방하나 4byte * 5) 
	printf("ary 전체크기: %d\n", sizeof(ary));
	int* pary = ary;  // 배열이름 자체가 주소이므로 &없어도 됨

	printf("ary 주소: %p\n", ary);
	printf("ary[0] 주소: %p\n", ary[0]);  // 0번 방의 데이터 불러오는 형태
	printf("ary[0] 주소: %p\n", &ary[0]);  // 0번 방의 주소 불러오는 형태 / 배열의 주소는 배열의 첫번째방의 주소와 같다
	printf("ary + 1: %p\n", ary + 1);
	printf("ary[1] 주소: %p\n", &ary[1]);

	printf("pary 주소: %p\n", &pary);
	printf("pary 값: %p\n", pary);
	printf("pary[0] 주소: %p\n", &pary[0]);
	printf("pary[0]: %d\n", pary[0]);
	printf("pary[0]: %d\n", *pary);
	printf("pary[1]: %d\n", *(pary + 1));  // 두번째 방 값 불러오기



	return 0;
}