#include <iostream>

namespace BestComImpl  // BestComImpl라는 이름공간에 함수의 선언만 삽입
{
	void SimpleFunc(void);
}

namespace ProgComImpl  // ProgComImpl라는 이름공간에 함수의 선언만 삽입
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)  // BestComImpl에 선언된 SimpleFunc 함수 정의
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void)  // ProgComImpl에 선언된 SimpleFunc 함수 정의
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}