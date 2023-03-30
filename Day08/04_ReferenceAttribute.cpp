#include <iostream>
using namespace std;

class First
{
public:
	void FirstFunc() { cout << "FirstFunc()" << endl; }
	virtual void SimpleFunc() { cout << "First's SimpleFunc()" << endl; }
};

class Second : public First
{
public:
	void SecondFunc() { cout << "SecondFunc()" << endl; }
	virtual void SimpleFunc() { cout << "Second's SimpleFunc()" << endl; }
};

class Third : public Second
{
public:
	void ThirdFunc() { cout << "ThirdFunc()" << endl; }
	virtual void SimpleFunc() { cout << "Third's SimpleFunc()" << endl; }
};

int main()
{
	Third obj;
	obj.FirstFunc();  // �������
	obj.SecondFunc();  // ���
	obj.ThirdFunc();
	obj.SimpleFunc();  // SimpleFunc�� �����Լ��̹Ƿ� Third's SimpleFunc() ���

	Second& sref = obj;  // ���� - obj�� Third Ÿ��
	sref.FirstFunc();
	sref.SecondFunc();
	sref.SimpleFunc();  // SimpleFunc�� �����Լ��̹Ƿ�(��üŸ�� �߽����� ��) Third's SimpleFunc() ���

	First& fref = obj;
	fref.FirstFunc();
	fref.SimpleFunc();  // SimpleFunc�� �����Լ��̹Ƿ�(��üŸ�� �߽����� ��) Third's SimpleFunc() ���
	return 0;
}