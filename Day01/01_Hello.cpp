# include <iostream>

int main(void)     // �Լ� �Ӹ� : ��� �Լ��̸�(�Է�). ����(int), ����(char)
{                  // �Լ� ����(�Լ� ��ü)
	int num = 20;  // ���� ����
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;

	std::cout << num << std::endl;
	std::cout << num << 'A';
	std::cout << "hi" << std::endl;

	std::cout << ' ' << 3.14 << std::endl;
	return 0;     // ����
}                // �Լ� ��