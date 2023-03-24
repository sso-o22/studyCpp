// initialize

#include <iostream>
using namespace std;

class Myclass
{
private:
	char id;
	int age;
	char name[10];
public:
	Myclass(char aid, int aage, const char* aname); // 생성자 원형(선언)
	 
	void getData();  // 메소드 원형(선언)
};

Myclass::Myclass(char aid, int aage, const char* aname) : id(aid), age(aage)  // initialize
{
	printf("생성자 호출\n");
	id = aid;
	age = aage;
	strcpy_s(name, 10, aname);
}

void Myclass::getData()
{
	cout << id << ' ' << name << ' ' << age << ' ' << endl;
}

int main()
{
	Myclass o('1', 26, "soojung");
	//	o.set('1', 26, "soojung");
	o.getData();

	return 0;
}