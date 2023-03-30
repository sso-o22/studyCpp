#include <iostream>
using namespace std;

class CTest
{
private:
	int num;
public:
	CTest(int n)  // 생성자 (클래스 이름과 같게) : 초기화 시키는 역할
	{
		num = n;
		cout << num << " CTest Constructor" << endl;
	}
	~CTest()  // 슈퍼클래스 소멸자
	{
		cout << "CTest Destructor" << endl;
	}
};

class CTestSub : public CTest
{
private:
	int subn;
public:
	CTestSub(int sn, int n) : CTest(sn)  // 생성자
	{
		subn = n;  
		cout << subn << " CTestSub Constructor" << endl;
	}
	~CTestSub()  // 서브클래스 소멸자
	{
		cout << "CTestSub Destructor" << endl;
	}
};

int main()
{
	CTest c1(10);  // 객체 생성
	cout << "========================" << endl;
	CTestSub c2(1, 10);

	return 0;
}
