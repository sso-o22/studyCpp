#define _CRT_SECURE_WARNINGS
#include <iostream>
using namespace std;

class Myclass
{
private:
	int num1, num2;
	const char* name;
public:
	// ����Ʈ �ʱ�ȭ
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
	cm1 = cm;  // ��ü���� ���� ���� ���� (������ �⺻ �ڷ����� �Ǿ�� ��)
	cm1.ShowData();

	return 0;
}