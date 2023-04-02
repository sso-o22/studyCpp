#include <iostream>
using namespace std;

template <typename T>  // Ŭ���� ���ø� �Ϲ�ȭ
class CTest
{
private:
	T data;  // ���ø� ����ϸ� �ڷ����� T
public:
	CTest(T adata) : data(adata) { } // ������, �ݷ��ʱ�ȭ
	T getData()
	{
		return data;
	}
};

template <>  // Ŭ���� ���ø� Ư��ȭ
class CTest<char>
{
private:
	char data;
public:
	CTest(char adata) : data(adata) { }
	char getData()
	{
		return data;
	}
};

int main()
{
//  10, a�� �ʱ�ȭ�Ǵ� ������ �����
//	CTest obj(10); �Ϲ����� ����

	CTest<int> obj1(10);
	cout << obj1.getData() << endl;

	CTest<char> obj2('a');
	cout << obj2.getData() << endl;

	return 0;
}