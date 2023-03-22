#include <stdio.h>

// 1번째
/*
int main()
{
	int n1 = 10;
	int n2 = 20;

	printf("변경 전 n1: %d\t n2: %d\n", n1, n2);
	int temp = n1;
	n1 = n2;
	n2 = temp;

	printf("변경 후 n1: %d\t n2: %d\n", n1, n2);

	return 0;
}
*/

/*
// 2번째 함수로 구현 : call by value
void swap(int n1, int n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;

	printf("n1: %d\t n2: %d\n", n1, n2);
}

int main()
{
	int n1 = 10, n2 = 20;

	printf("호출 전 n1: %d\t n2: %d\n", n1, n2);

	swap(n1, n2);
	printf("호출 후 n1: %d\t n2: %d\n", n1, n2);  
	// 값 안바뀜 -> swap에 있는 n1, n2와 main에 있는 n1, n2가 다름 / 값에 의한 복사 call-by-value
	// call-by-reference 해야함

	return 0;
}
*/

// 3번째 포인터로 구현 : call by reference
void swap(int* pn1, int* pn2)  // 나는 포인터변수 입니다! / 주소 저장
{
	int temp;
	temp = *pn1;  // temp에 n1이 가리키는 포인터값을 집어넣어라
	*pn1 = *pn2;  // n1이 가리키는 포인터값에 n2가 가리키는 포인터값을 집어넣어라
	*pn2 = temp;  // n2가 가리키는 포인터값에 temp를 집어넣어라

	//printf("n1: %d\t n2: %d\n", n1, n2);
}

int main()
{
	int n1 = 10, n2 = 20;

	printf("호출 전 n1: %d\t n2: %d\n", n1, n2);

	swap(&n1, &n2);
	printf("호출 후 n1: %d\t n2: %d\n", n1, n2);

	return 0;
}