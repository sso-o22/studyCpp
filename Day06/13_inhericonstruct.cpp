#include <iostream>
using namespace std;

class Super
{
public:
	Super()  // 생성자
	{
		cout << "Super()" << endl;
	}
	~Super()  // 소멸자 
	{
		cout << "~Super()" << endl;
	}
};

class Sub : public Super  // Super의 상속을 받는 Sub 클래스
{
public:
	Sub()  // 생성자
	{
		cout << "Sub()" << endl;
	}
	~Sub()  // 소멸자
	{
		cout << "~Sub()" << endl;
	}
};

int main()
{
	cout << "Start" << endl;
	Sub obj;  // Sub 클래스의 객체 생성
	cout << "Stop" << endl;


	return 0;
}