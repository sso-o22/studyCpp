/*
생성자 기능 추가
생성자 있는 외부 클래스 만들기
생성자 클래스 외부에서 정의
클래스에는 원형, 선언
*/

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
//	void set(char aid, int aage, const char* aname);  
	void getData();  // 메소드 원형(선언)
};

Myclass::Myclass(char aid, int aage, const char* aname) : id(aid), age(aage)  // 생성자 정의
{
	printf("생성자 호출\n");
	id = aid;
	age = aage;
	strcpy_s(name, 10, aname);
}

/*
void Myclass::set(char aid, int aage, const char* aname)
{
	// set함수의 입력값
	id = aid;
	age = aage;
	strcpy_s(name, 10, aname);
	//name = aname;
}
*/
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