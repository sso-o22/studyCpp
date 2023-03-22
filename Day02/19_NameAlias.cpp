#include <iostream>
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main(void)
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;  // 별칭 선언되기 전의 num1, num2 접근

	namespace ABC = AAA::BBB::CCC;  // AAA::BBB::CCC에 ABC라는 별칭 부여
	cout<<ABC::num1 << endl;
	cout<<ABC::num2 << endl;  // 별칭 선언 후의 num1, num2 접근
	return 0;
}