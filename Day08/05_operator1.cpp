#define _CRT_SECURE_WARNINGS
#include <iostream>
using namespace std;

class Myclass
{
private:
	int num1, num2;
	const char* name;
public:
	// 디폴트 초기화
	Myclass(int n1 = 0, int n2 = 0, const char* aname = nullptr) : num1(n1), num2(n2), name(aname) { }  
	void ShowData()
	{
		cout << num1 << ", " << num2 << ", " << name << endl;
	}
	
};

int main()
{
	Myclass m(1, 2, "hong");
	m.ShowData();
	Myclass cm(m);  // cm = m
	cm.ShowData();

	Myclass cm1;
	cm1 = cm;  // 객체끼리 대입 연산 가능 (원래는 기본 자료형만 되어야 함)
	cm1.ShowData();

	return 0;
}