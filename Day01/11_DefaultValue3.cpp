#include <iostream>
int BoxVolume(int length, int width = 1, int height = 1);

int main(void)
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;  // 3 * 3 * 3
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;  // 5 * 5 * 1
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;  // 7 * 1 * 1
	// std::cout << "[D, D, D] : " << BoxVolume() << std::endl;  // length 값이 없으므로 오류!
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}