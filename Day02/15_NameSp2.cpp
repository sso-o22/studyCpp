#include <iostream>

namespace BestComImpl  // BestComImpl��� �̸������� �Լ��� ���� ����
{
	void SimpleFunc(void);
}

namespace ProgComImpl  // ProgComImpl��� �̸������� �Լ��� ���� ����
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)  // BestComImpl�� ����� SimpleFunc �Լ� ����
{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
}

void ProgComImpl::SimpleFunc(void)  // ProgComImpl�� ����� SimpleFunc �Լ� ����
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}