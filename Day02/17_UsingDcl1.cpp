#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc;  // 이름공간 지정 없이 함수 호출하겠다!
	HybFunc();  // 위에서 using 사용했기 때문에 이름 공간 지정없이 함수 호출 가능
	return 0;
}