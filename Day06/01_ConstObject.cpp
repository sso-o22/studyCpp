#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n) {}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
};

int main(void)
{
	const SoSimple obj(7);  // const ��ü ����
	// obj.AddNum(20);  // ����Լ� AddNum�� const �Լ��� �ƴϹǷ� ȣ�� �Ұ���
	obj.ShowData();  // ����Լ� ShowData�� const �Լ��̹Ƿ� const ��ü ������� ȣ�� ����
	return 0;
}