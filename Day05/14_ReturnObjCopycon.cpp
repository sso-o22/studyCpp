#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n) {}
	SoSimple(const SoSimple& copy) : num(copy.num)  // copy는 obj
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;  // this는 ob
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "return 이전" << endl;
	return ob;
}
int main()
{
	SoSimple obj(7);  // obj라는 객체는 num에 7을 가지고 있는 객체
	SimpleFuncObj(obj).AddNum(30).ShowData();
	obj.ShowData();
	return 0;
}