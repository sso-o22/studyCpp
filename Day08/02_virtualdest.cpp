#include <iostream>
using namespace std;

class CTest
{
private:
	int num;
public:
	CTest(int n) : num(n)
	{
		cout << num << " CTest Constructor" << endl;
	}
	virtual ~CTest()
	{
		cout << "CTest Destructor" << endl;
	}
	void func()
	{
		cout << "CTest func()" << endl;
	}
	virtual void vfunc()  // 가상함수 - 가상테이블에 등록 / 런타임에서 호출되는 함수 결정
	{
		cout << "CTest vfunc()" << endl;
	}
};

class CTestSub : public CTest
{
private:
	int snum;
public:
	CTestSub(int n1, int n2) : CTest(n1), snum(n2)
	{
		cout << snum << " CTestSub Constructor" << endl;
	}
	~CTestSub()
	{
		cout << "CTestSub Desctuctor" << endl;
	}
	void vfunc()  // 오버라이딩
	{
		cout << "CTestSub func()" << endl;
	}
};


int main()
{
//	CTest c1(10);
//	cout << "=========================" << endl;
//	CTestSub c2(1, 10);
//	cout << "=========================" << endl;
	// 상위클래스(추상자료형)의 객체 포인터로 가상클래스 참조
	CTest* ps = new CTestSub(3, 33);  // 소멸자 호출 안됨 (메모리 동적 할당 때문에) -> delete 해야 함

	delete ps;  // CTestSub 클래스 소멸자 호출 안됨 (가상 함수 사용했기 때문)

	return 0;
}