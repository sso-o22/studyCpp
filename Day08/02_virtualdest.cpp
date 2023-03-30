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
	virtual void vfunc()  // �����Լ� - �������̺� ��� / ��Ÿ�ӿ��� ȣ��Ǵ� �Լ� ����
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
	void vfunc()  // �������̵�
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
	// ����Ŭ����(�߻��ڷ���)�� ��ü �����ͷ� ����Ŭ���� ����
	CTest* ps = new CTestSub(3, 33);  // �Ҹ��� ȣ�� �ȵ� (�޸� ���� �Ҵ� ������) -> delete �ؾ� ��

	delete ps;  // CTestSub Ŭ���� �Ҹ��� ȣ�� �ȵ� (���� �Լ� ����߱� ����)

	return 0;
}