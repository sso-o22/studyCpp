#include <stdio.h>

int g = 0;  // ��������
void func()
{
	printf("func() : %p\n", func);
}

int main()
{
	int n = 10;  // �����Լ��� �ҼӵǾ��ִ� ��������
	static int c;
	const int d = 10;  // stack ������ �Ҵ�
	char ary[10] = "hi";  // ���� ������ �迭, stack ������ �Ҵ�

	func();
	printf("local n : %p\n", &n);
	printf("global g : %p\n", &g);
	printf("static c : %p\n", &c);
	printf("const d : &p\n", &d);  // ������ �޸𸮿� �Ҵ�(�ڿ� �α��� ���� �Ȱ���)
	printf("array : &p\n", ary);  // ������ �޸𸮿� �Ҵ�(�ڿ� �α��� ���� �Ȱ���)

	return 0;
}

/*
�޸� ������ ũ�� ������
1. �ڵ� ���׸�Ʈ : ��ɾ��(�Լ�)�� ��ġ�� 
2. ������ ���׸�Ʈ
	- ���� : ���, ���ͷ� / ���α׷� ���۰� ���ÿ� �Ҵ�
	- ����
	���������� stack ���� ���ʿ� ��ġ
*/