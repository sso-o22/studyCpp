#include <iostream>
using namespace std;

class Super
{
public:
//	void func1() { cout << "Super::func1()" << endl; }
//	void func2() { cout << "Super::func2()" << endl; }
	virtual void func1() { cout << "Sub::func1()" << endl; }
	virtual void func2() { cout << "Sub::func2()" << endl; }
	void func3() { cout << "Super::func3()" << endl; }
};

class Sub : public Super
{
public:
	void func1() { cout << "Sub::func1()" << endl; }
	void func2() { cout << "Sub::func2()" << endl; }
	void func3() { cout << "Sub::func3()" << endl; }
	void func4() { cout << "Sub::func4()" << endl; }
};

int main()
{
	Super super;
	Sub sub;

	Super* sptr = new Sub;
	sptr->func1();
	sptr->func2();
	sptr->func3();

	/*
	Super super;
	Sub sub;
	super.func3();
	super.func2();
	super.func1();
	sub.func4();
	sub.func3();  // Sub는 Super의 상속받음
	sub.func2();  // 오버라이딩 (이름이 다르면 부모꺼 다 나옴)
	sub.func1();  // 오버라이딩
	
	// 부모껄로 자신 객체 가리킬 수 있음
	cout << endl;
	
	Super* ps = new Sub;  // 메모리 동적 할당 / 자식객체를 부모포인터로 연결함
	// 객체보다는 포인터타입을 기준으로 출력됨
	ps->func3();  
	ps->func1();
	ps->func2();

	delete ps;
	*/
	return 0;
}