#include <iostream>
/*
void add()  // �Է°� ����� ���� �Լ�
{
	int a = 10;
	int b = 20;
	int res;

	res = a + b;

	std::cout << "res: " << res << std::endl;

}

int main()
{
	add();

	return 0;
}
*/

/*
void add(int n1, int n2)  // �Է¸� �ִ� �Լ� / �Է��� ����� ��� : �Ű������� ����
{
	int res = n1 + n2;

	std::cout << "res: " << res << std::endl;
}

int main()
{
	int num1 = 10;
	int num2 = 20;

	add(num1, num2);  // �Է����� �������ִ� ���� ���μ�(num1, num2)
}
*/

int add(int n1, int n2);  // �Լ� ����

int main()
{
	int num1 = 10;
	int num2 = 20;

	int res = add(num1, num2);  // ���ϵǴ� ���� �����ؼ� ���
	std::cout << "res: " << res << std::endl;
	std::cout << "res: " << add(num1, num2) << std::endl;
}

int add(int n1, int n2)  // �Է°� ����� �ִ� �Լ�
{
	int res = n1 + n2;
	return res;  // ����� return������ �ۼ�

	// std::cout << "res: " << res << std::endl;
}

