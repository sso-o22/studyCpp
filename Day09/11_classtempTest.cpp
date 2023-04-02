#include <iostream>
using namespace std;

template <typename T>  // 클래스 템플릿 일반화
class CTest
{
private:
	T data;  // 템플릿 사용하면 자료형이 T
public:
	CTest(T adata) : data(adata) { } // 생성자, 콜론초기화
	T getData()
	{
		return data;
	}
};

template <>  // 클래스 템플릿 특수화
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
//  10, a로 초기화되는 데이터 만들기
//	CTest obj(10); 일반적인 형태

	CTest<int> obj1(10);
	cout << obj1.getData() << endl;

	CTest<char> obj2('a');
	cout << obj2.getData() << endl;

	return 0;
}