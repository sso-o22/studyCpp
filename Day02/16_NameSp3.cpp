#include <iostream>

namespace BestComImpl  // BestComImpl��� �̸������� SimpleFunc �Լ� ����
{
	void SimpleFunc(void);
	void PrettyFunc(void);
}

/*
namespace BestComImpl  // BestComImpl��� �̸������� PrettyFunc �Լ� ���� / ���� ���� ����
{
	void PrettyFunc(void);
}
*/
namespace ProgComImpl  // ProgComImpl��� �̸������� SimpleFunc �Լ� ����
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();  // SimpleFunc �Լ� ȣ��
	return 0;
}

void BestComImpl::SimpleFunc(void)  // SimpleFunc �Լ� ����
{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	PrettyFunc();  // PrettyFunc �Լ� ȣ��
	ProgComImpl::SimpleFunc();  // ProgComImpl�̶�� �̸� ������ �ִ� SimpleFunc �Լ� ȣ��
}

void BestComImpl::PrettyFunc(void)  // PrettyFunc �Լ� ����
{
	std::cout << "So Pretty!!" << std::endl;
}

void ProgComImpl::SimpleFunc(void)  // SimpleFunc �Լ� ����
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}