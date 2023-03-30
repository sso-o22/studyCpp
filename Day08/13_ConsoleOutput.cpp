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
		void operator<< (ostream& (*fp)(ostream& ostm))  // �Լ� ������
		{
			fp(*this);
		}
	};

	ostream& endl(ostream& ostm)  // �Լ� ���� (�Լ��̸� : endl)
	{
		ostm<< '\n';
		fflush(stdout);  // ��¹���(�ӽ÷� �� ����Ǵ� �� -> ���⼭ �����͸� ���� �����ġ�� ����) 
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
