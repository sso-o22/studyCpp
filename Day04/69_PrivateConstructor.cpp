#include <iostream>
using namespace std;

class AAA
{
private:
	int num;
public:
	AAA() : num(0) { }  // public 생성자 정의 -> 클래스 외부에서 이 생성자를 기반으로 객체 생성
	AAA& CreateInitObj(int n) const  // 함수 내에서 private 생성자 이용하여 AAA객체 생성 및 반환
	{
		AAA* ptr = new AAA(n);
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }
private:
	AAA(int n) : num(n) { }
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA &obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA &obj2 = base.CreateInitObj(12);
	obj2.ShowNum();

	delete &obj1;
	delete &obj2;
	return 0;
}