#include <iostream>
using namespace std;
//#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

class Human
{
private:
	char name[20];  // �迭 ����� ���ÿ� �ʱ�ȭ ����
	int id;
	int age;
public:
	Human(const char aname[20], int aid, int aage)  // ������
	{
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	/*
	void setData(const char aname[20], int aid, int aage)
	{
		// name = "ȫ�浿";
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	*/
	void getData()
	{
		cout << "�̸�: " << name << " " << "�й�: " << id << " " << "����: " << age << endl;
	}
};

int main()
{
//	Human h;
//	h.setData("ȫ�浿", 182733, 30);

	Human h("ȫ�浿", 182733, 30);
	h.getData();


	return 0;
}