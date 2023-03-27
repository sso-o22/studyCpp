#include <iostream>
using namespace std;

class SelfRef
{
private:
	int num;
public:
	SelfRef(int n) : num(n)
	{
		cout << "객체생성" << endl;
	}
	SelfRef& Adder(int n)  // 객체 자신을 참조할 수 있는 참조값을 반환
	{
		num += n;
		return *this;  
	}
	SelfRef& ShowTwoNumber()  // 객체 자신을 참조할 수 있는 참조값을 반환
	{
		cout << num << endl;
		return *this;
	}
};

int main(void)
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2); // 참조자 ref는 객체 obj를 참조함

	obj.ShowTwoNumber();  // 28행에서 일어나는 일 확인 위해 객체에 저장된 값 출력
	ref.ShowTwoNumber();  // 28행에서 일어나는 일 확인 위해 객체에 저장된 값 출력

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();  
	return 0;
}
