#include <iostream>
using namespace std;

class Myclass
{
// 접근제어 지정자 안쓰면 자동으로 private
private:  // 외부 접근 불가능
	int private_val;
public:  // 외부 접근 가능
	int public_val;
protected:  // 상속에서만 접근 가능
	int protected_val;

public:  // 외부(메인)에서 사용하려면 public으로 해야함 / 멤버함수는 무조건 public
	void set(int an)
	{
		private_val = an;
	}
	void get()
	{
		cout << "public_val: " << public_val << endl;
		cout << "private_val: " << private_val << endl;
	}
};

int main()
{
	Myclass o;
//	o.private_val;  // 사용불가
	o.public_val = 100;  // public만 외부에서 접근 가능
//	o.protected_val;  // 사용불가
	
	o.set(200);

	o.get();

	return 0;
}