#include <iostream>

namespace BestComImpl  // BestComImpl라는 이름공간에 SimpleFunc 함수 선언
{
	void SimpleFunc(void);
	void PrettyFunc(void);
}

/*
namespace BestComImpl  // BestComImpl라는 이름공간에 PrettyFunc 함수 선언 / 위와 같은 공간
{
	void PrettyFunc(void);
}
*/
namespace ProgComImpl  // ProgComImpl라는 이름공간에 SimpleFunc 함수 선언
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();  // SimpleFunc 함수 호출
	return 0;
}

void BestComImpl::SimpleFunc(void)  // SimpleFunc 함수 정의
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc();  // PrettyFunc 함수 호출
	ProgComImpl::SimpleFunc();  // ProgComImpl이라는 이름 공간에 있는 SimpleFunc 함수 호출
}

void BestComImpl::PrettyFunc(void)  // PrettyFunc 함수 정의
{
	std::cout << "So Pretty!!" << std::endl;
}

void ProgComImpl::SimpleFunc(void)  // SimpleFunc 함수 정의
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}