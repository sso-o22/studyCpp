#include <iostream>
using namespace std;

class MyCalc
{
private:
	int num1;
	int num2;
public:
	// »ý¼ºÀÚ·Î ÃÊ±âÈ­ÇÑ´Ù. (ÄÝ·Ð ÃÊ±âÈ­ == ÃÊ±âÈ­ ¸®½ºÆ®)
	MyCalc(int n1, int n2);

	void add(int n1, int n2);
	void sub(int n1, int n2);
	void mul(int n1, int n2);
	void div(int n1, int n2);
};

MyCalc::MyCalc(int n1, int n2) : num1(n1), num2(n2)  // ÄÝ·Ð ÃÊ±âÈ­
{

}

void MyCalc::add(int n1, int n2)
{
	int result = 0;
	result = n1 + n2;
	cout << "µ¡¼À °á°ú: " << result << endl;
}

void MyCalc::sub(int n1, int n2)
{
	int result = 0;
	result = n1 - n2;
	cout << "»¬¼À °á°ú: " << result << endl;
}

void MyCalc::mul(int n1, int n2)
{
	int result = 0;
	result = n1 * n2;
	cout << "°ö¼À °á°ú: " << result << endl;
}

void MyCalc::div(int n1, int n2)
{
	int result = 0;
	result = n1 / n2;
	cout << "³ª´°¼À °á°ú: " << result << endl;
}

int main()
{
	MyCalc s(0, 0);
	s.add(10, 1);
	s.sub(10, 2);
	s.mul(10, 3);
	s.div(10, 5);

	return 0;
}