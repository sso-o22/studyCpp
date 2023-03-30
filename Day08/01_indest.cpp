#include <iostream>
using namespace std;

class CTest
{
private:
	int num;
public:
	CTest(int n)  // ������ (Ŭ���� �̸��� ����) : �ʱ�ȭ ��Ű�� ����
	{
		num = n;
		cout << num << " CTest Constructor" << endl;
	}
	~CTest()  // ����Ŭ���� �Ҹ���
	{
		cout << "CTest Destructor" << endl;
	}
};

class CTestSub : public CTest
{
private:
	int subn;
public:
	CTestSub(int sn, int n) : CTest(sn)  // ������
	{
		subn = n;  
		cout << subn << " CTestSub Constructor" << endl;
	}
	~CTestSub()  // ����Ŭ���� �Ҹ���
	{
		cout << "CTestSub Destructor" << endl;
	}
};

int main()
{
	CTest c1(10);  // ��ü ����
	cout << "========================" << endl;
	CTestSub c2(1, 10);

	return 0;
}
