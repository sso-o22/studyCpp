/*
메모리 동적 할당 (C type)
*/
#include <iostream>
using namespace std;

int main()
{
	int* arr;
	int size;
//	char size;

	printf("배열방의 갯수: ");
	scanf_s("%d", &size);  // scanf로 입력을 받을때는 주소연산자가 필요

	arr = (int*)malloc(sizeof(int));  // heap 영역에 메모리 할당;
//	arr = malloc(sizeof(int));

	printf("만들어진 배열 크기: %d\n", sizeof(int) * size);
	printf("%d\n", sizeof(int));

	free(arr);  // 메모리 해제 (malloc과 짝궁)

	return 0;  // 할당된 메모리의 시작 주소 리턴
}