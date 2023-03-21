# include <iostream>
//# include <stdio.h>

void func()
{
	//std::cout << "func()" << std::endl;
	printf("func()\n");
}

void func(int a)
{
	//std::cout << "func(a)" << std::endl;
	printf("func(a)\n");
}

void func(int a, int b)  // 함수 이름 같아도 매개변수 갯수로 구분함
{
	//std::cout << "func(a)" << std::endl;
	printf("func(a, b)\n");
}

void func(char a)
{
	//std::cout << "func(a)" << std::endl;
	printf("func(a)\n");
}

int main()
{	
	int n = 10, m = 20;
	char ch = 'a';
	func();
	func(n);
	func(n, m);
	func(ch);

	return 0;
}