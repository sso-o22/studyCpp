#include <iostream>
using namespace std;
#pragma warning(disable:4996)

class Myclass
{
private:
	int age;
	char id;
	char* name;

// ����Լ�(=�޼ҵ�): ���
public:
	Myclass(int mage, char mid, char* mname); // ������ ����
	void getData(); // �޼ҵ� ����(����)   
};

Myclass::Myclass(int mage, char mid, char* mname) : age(mage), id(mid) // ������ ����, ��� �̴ϼȶ������� �̿��� ��� �ʱ�ȭ
{
	name = new char[10];
	strcpy(name, mname);
}

void Myclass::getData() // �޼ҵ� ����
{
	cout << id << " " << name << " " << age << endl;
}

int main()
{
	Myclass sc1(25, 'W', "soojung");
	sc1.getData();

	return 0;
}