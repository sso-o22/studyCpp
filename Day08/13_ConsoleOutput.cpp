#include <iostream>
namespace mystd
{
	using namespace std;
	class ostream
	{
	public:
		void operator<< (const char* str)
		{
			printf("%s", str);
		}
		void operator<< (const char str)
		{
			printf("%c", str);
		}
		void operator<< (int num)
		{
			printf("%d", num);
		}
		void operator<< (double e)
		{
			printf("%g", e);
		}
		void operator<< (ostream& (*fp)(ostream& ostm))  // 함수 포인터
		{
			fp(*this);
		}
	};

	ostream& endl(ostream& ostm)  // 함수 정의 (함수이름 : endl)
	{
		ostm<< '\n';
		fflush(stdout);  // 출력버퍼(임시로 값 저장되는 곳 -> 여기서 데이터를 꺼내 출력장치로 보냄) 
		return ostm;
	}

	ostream cout;
}

int main()
{
	using mystd::cout;
	using mystd::endl;

	cout << "Simple String";
	cout << endl;
	cout << 3.14;
	cout << endl;
	cout << 123;
	endl(cout);

	return 0;
}
