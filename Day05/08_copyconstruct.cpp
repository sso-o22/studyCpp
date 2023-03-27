#include <iostream>
using namespace std;

class Myclass
{
	int num;
public:
	Myclass(int n) : num(n)  // 복사생성자 아님 (매개변수 참조형태 아니므로)
	{
		cout << "생성자 호출" << endl;
	}
	explicit Myclass(const Myclass& other)  // 복사생성자 (매개변수 참조형태로!!)
	{
		cout << "복사생성자 호출" << endl;
		num = other.num;
	}
	void getData()
	{
		cout << num << endl;
	}
};


int main()
{
	Myclass m1(10);  // 생성자 호출 / 객체 생성 
//	Myclass m2 = m1;  // 복사생성자 호출 / int num2 = num1
	Myclass m3(m1);  // 복사생성자 호출 (만들지 않아도 호출 가능 - default 복사생성자)

	m1.getData();
//	m2.getData();
	m3.getData();
	return 0;
}