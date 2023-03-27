#include <iostream>
using namespace std;

class SelfRef
{
private:
	int num;
public:
	SelfRef(int n) : num(n)
	{
		cout << "��ü����" << endl;
	}
	SelfRef& Adder(int n)  // ��ü �ڽ��� ������ �� �ִ� �������� ��ȯ
	{
		num += n;
		return *this;  
	}
	SelfRef& ShowTwoNumber()  // ��ü �ڽ��� ������ �� �ִ� �������� ��ȯ
	{
		cout << num << endl;
		return *this;
	}
};

int main(void)
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2); // ������ ref�� ��ü obj�� ������

	obj.ShowTwoNumber();  // 28�࿡�� �Ͼ�� �� Ȯ�� ���� ��ü�� ����� �� ���
	ref.ShowTwoNumber();  // 28�࿡�� �Ͼ�� �� Ȯ�� ���� ��ü�� ����� �� ���

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();  
	return 0;
}
