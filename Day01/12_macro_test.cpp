#include <iostream>

#define SUM(x, y)	x + y  // 매크로 함수
#define SQUARE(x)	x * x
#define SQUARE1(x)	(x) * (x)

void func()
{

}

int main()
{
	std::cout << SUM(10.1, 20.1) << std::endl;

	std::cout << SQUARE(10) << std::endl;
	std::cout << SQUARE(10 + 1) << std::endl;  // 10 + (1 * 10) + 1 = 21

	std::cout << SQUARE1(10 + 1) << std::endl;  // (10 + 1) * (10 + 1) = 121

	return 0;
}