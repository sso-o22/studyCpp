#include <iostream>
/*
void add()  // 입력과 출력이 없는 함수
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
void add(int n1, int n2)  // 입력만 있는 함수 / 입력을 만드는 방법 : 매개변수를 선언
{
	int res = n1 + n2;

	std::cout << "res: " << res << std::endl;
}

int main()
{
	int num1 = 10;
	int num2 = 20;

	add(num1, num2);  // 입력으로 전달해주는 놈을 실인수(num1, num2)
}
*/

int add(int n1, int n2);  // 함수 선언

int main()
{
	int num1 = 10;
	int num2 = 20;

	int res = add(num1, num2);  // 리턴되는 값을 저장해서 사용
	std::cout << "res: " << res << std::endl;
	std::cout << "res: " << add(num1, num2) << std::endl;
}

int add(int n1, int n2)  // 입력과 출력이 있는 함수
{
	int res = n1 + n2;
	return res;  // 출력은 return문으로 작성

	// std::cout << "res: " << res << std::endl;
}

