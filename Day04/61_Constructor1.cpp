#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;
public:
	// 생성자 오버로딩
	SimpleClass()
	{
		printf("default 생성자\n");
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n)
	{
		printf("인수 하나 갖는 생성자\n");
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2)
	{
		printf("인수 두개 갖는 생성자\n");
		num1 = n1;
		num2 = n2;
	}
	/*
	SimpleClass(int n1 = 0, int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
	}
	*/

	void ShowData() const
	{
		cout << num1 << " " << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1;
//	SimpleClass sc1();  인수 없는데 괄호치면 안됨 -> 함수 원형 선언이 되어 버림

	sc1.ShowData();

//	SimpleClass sc2 = SimpleClass(100);  이렇게 해도 됨
	SimpleClass sc2(100);
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	sc3.ShowData();
	return 0;
}