//#include <iostream>
#include <stdio.h>

int main()
{
	int ary[5] = { 1, 2, 3, 4, 5 };  // ��üũ�� : 20byte (���ϳ� 4byte * 5) 
	printf("ary ��üũ��: %d\n", sizeof(ary));
	int* pary = ary;  // �迭�̸� ��ü�� �ּ��̹Ƿ� &��� ��

	printf("ary �ּ�: %p\n", ary);
	printf("ary[0] �ּ�: %p\n", ary[0]);  // 0�� ���� ������ �ҷ����� ����
	printf("ary[0] �ּ�: %p\n", &ary[0]);  // 0�� ���� �ּ� �ҷ����� ���� / �迭�� �ּҴ� �迭�� ù��°���� �ּҿ� ����
	printf("ary + 1: %p\n", ary + 1);
	printf("ary[1] �ּ�: %p\n", &ary[1]);

	printf("pary �ּ�: %p\n", &pary);
	printf("pary ��: %p\n", pary);
	printf("pary[0] �ּ�: %p\n", &pary[0]);
	printf("pary[0]: %d\n", pary[0]);
	printf("pary[0]: %d\n", *pary);
	printf("pary[1]: %d\n", *(pary + 1));  // �ι�° �� �� �ҷ�����



	return 0;
}