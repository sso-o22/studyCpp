#include <iostream>
//#pragma warning(disable:4996) // C4996 에러를 무시
using namespace std;

// 클래스 멤버변수에 접근할 수 있는 방법은 3가지로 표현된다. (은닉)
class Myclass
{
private:
	char id;
	int age;
	char name[10];
	// 멤버함수(=메소드) : 기능
public:
	void set(char aid, int aage, const char* aname);  // 초기화
	void get();  // 3개의 멤버변수 읽어와서 출력
};
// 객체 o 이용해서 출력
// 메소드 정의 클래스 외부에 작성
void Myclass::set(char aid, int aage, const char* aname)
{
	// set함수의 입력값
	id = aid;  
	age = aage;
	strcpy_s(name, 10, aname);
	//name = aname;
}

void Myclass::get()
{
	cout << id << ' ' << name << ' ' << age << ' ' << endl;
}

int main()
{
	Myclass o;
	o.set('1', 26, "soojung");
	o.get();

	return 0;
}