#include <stdio.h>  // C �ҽ��� �������

int main()
{
	// int num = 10;
	// printf("num: %d\n", num);

	// num = 20;
	// printf("num: %d\n", num);
	/*
	const int num = 20;  // ���ȭ ���ÿ� �ʱ�ȭ
	printf("num: %d\n", num);

	// num = 30;  // ������̹Ƿ� ���� �Ұ���
	//printf("num: %d\n", num);

	int* p = &num;  // * : �׳� ��ȣ��, �ǹ�X / �ּҸ� �����ϴ� ���� ����(������ ����), &(�ּҿ�����)
	printf("p�� ����� ��: %p\n", p);
	printf("p�� �����ϴ� ��: %d\n", *p);
	*p = 100;  // * : ���� ���� ������ / �ּҰ� ����Ű�� ���� ���� �����ض�
	printf("p�� ����Ű�� ���� �����Ͱ�: %d\n", *p);
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
	const int* pa = &num1;  // �����ͺ��� pa ���� / �����ͺ����� �����Ͱ��� ���ȭ
	printf("pa: %p\n", pa);
	pa = &num2;
	printf("���� �� pa: %p\n", pa);  // ���ȭ ���ѳ��µ��� �� �����

	//*pa = 50;  // ���� -> �������������� ���� �Ұ���

	int* const pb = &num1; // �����ͺ����� ���ȭ
	//pb = &num2;  // �����ͺ����� ���ȭ �������Ƿ� ���� �Ұ���
	*pb = 70;  // ������ ������ ����

	return 0;
}