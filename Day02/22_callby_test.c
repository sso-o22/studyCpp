#include <stdio.h>

// 1��°
/*
int main()
{
	int n1 = 10;
	int n2 = 20;

	printf("���� �� n1: %d\t n2: %d\n", n1, n2);
	int temp = n1;
	n1 = n2;
	n2 = temp;

	printf("���� �� n1: %d\t n2: %d\n", n1, n2);

	return 0;
}
*/

/*
// 2��° �Լ��� ���� : call by value
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

	printf("ȣ�� �� n1: %d\t n2: %d\n", n1, n2);

	swap(n1, n2);
	printf("ȣ�� �� n1: %d\t n2: %d\n", n1, n2);  
	// �� �ȹٲ� -> swap�� �ִ� n1, n2�� main�� �ִ� n1, n2�� �ٸ� / ���� ���� ���� call-by-value
	// call-by-reference �ؾ���

	return 0;
}
*/

// 3��° �����ͷ� ���� : call by reference
void swap(int* pn1, int* pn2)  // ���� �����ͺ��� �Դϴ�! / �ּ� ����
{
	int temp;
	temp = *pn1;  // temp�� n1�� ����Ű�� �����Ͱ��� ����־��
	*pn1 = *pn2;  // n1�� ����Ű�� �����Ͱ��� n2�� ����Ű�� �����Ͱ��� ����־��
	*pn2 = temp;  // n2�� ����Ű�� �����Ͱ��� temp�� ����־��

	//printf("n1: %d\t n2: %d\n", n1, n2);
}

int main()
{
	int n1 = 10, n2 = 20;

	printf("ȣ�� �� n1: %d\t n2: %d\n", n1, n2);

	swap(&n1, &n2);
	printf("ȣ�� �� n1: %d\t n2: %d\n", n1, n2);

	return 0;
}