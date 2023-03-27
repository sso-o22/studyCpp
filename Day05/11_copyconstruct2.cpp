#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Myclass
{
	int num;
	char* name;
public:
	Myclass(int n, const char* name) : num(n)  
	{
		cout << "생성자 호출" << endl;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	explicit Myclass(const Myclass& other)  
	{
		cout << "복사생성자 호출" << endl;
//		this->name = other.name;
		this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
		this->num = other.num;
	}
	void getData()
	{
		cout << num << ", "<< name << endl;
	}
	~Myclass()
	{
		cout << "메모리 해제" << endl;
		delete[] this->name;
	}
};


int main()
{
	Myclass m1(1, "홍길동");  
	m1.getData();
	Myclass m2(m1);
	m2.getData();

	return 0;
}