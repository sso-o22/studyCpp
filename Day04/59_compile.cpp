#include <iostream>
//#pragma warning(disable:4996) // C4996 ������ ����
using namespace std;

// Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ�. (����)
class Myclass
{
private:
	char id;
	int age;
	char name[10];
	// ����Լ�(=�޼ҵ�) : ���
public:
	void set(char aid, int aage, const char* aname);  // �ʱ�ȭ
	void get();  // 3���� ������� �о�ͼ� ���
};
// ��ü o �̿��ؼ� ���
// �޼ҵ� ���� Ŭ���� �ܺο� �ۼ�
void Myclass::set(char aid, int aage, const char* aname)
{
	// set�Լ��� �Է°�
	id = aid;  
	age = aage;
	strcpy_s(name, 10, aname);
	//name = aname;
}

void Myclass::get()
{
	cout << id << ' ' << name << ' ' << age << ' ' << endl;
}

int main()
{
	Myclass o;
	o.set('1', 26, "soojung");
	o.get();

	return 0;
}