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
	const SoSimple obj(7);  // const 객체 생성
	// obj.AddNum(20);  // 멤버함수 AddNum은 const 함수가 아니므로 호출 불가능
	obj.ShowData();  // 멤버함수 ShowData는 const 함수이므로 const 객체 대상으로 호출 가능
	return 0;
}