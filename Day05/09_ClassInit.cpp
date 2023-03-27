#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2)
	{
		// empty
	}
	// SoSimple 객체를 인자로 받는 생성자 추가
	SoSimple(SoSimple& copy) : num1(copy.num1), num2(copy.num2)  // 이니셜라이저 이용하여 멤버 대 멤버 복사
	{
		cout << "Called SoSimple(SoSimple &copy)" << endl;  // 생성자 호출 확인
	}
	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main(void)
{
	SoSimple sim1(15, 30);
	cout << "생성 및 초기화 직전" << endl;
	SoSimple sim2 = sim1;  // SoSimple sim2(sim1); 으로 변환!
	cout << "생성 및 초기화 직후" << endl;
	sim2.ShowSimpleData();
	return 0;
}