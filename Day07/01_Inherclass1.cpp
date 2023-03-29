#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:  // 접근 제한 지시자
	char name[30];
	int age;
public:
	Person(const char*, int);  // 정보값 집어넣기 위해 생성자 만들기 (클래스 이름과 똑같이, 타입만 적어도 됨)
	void getData();  // 일반 함수이므로 '출력 이름 (입력);'
};

// Person의 특성 가지고 있으면서 Student 특성 가지고 있으면 -> 학생이다
// 자식 클래스가 더 많은 특징 가지고 있음
// 범위는 부모 클래스가 큼

class Student : public Person  // Person의 상속 받음
{
private:
	int studentID;
public:
	Student(const char*, int, int);  // 생성자
	// 상속관계에서 함수 이름 같아도 됨 -> 함수 오버라이딩 (아직 안배웠으므로 다르게 만듦)
	void ShowData();  // 이름 같고 매개변수 다르면 -> 함수 오버로딩
};

Person::Person(const char* aname, int aage)  // 생성자
{
	strcpy(name, aname);
	age = aage;
}

Student::Student(const char* aname, int aage, int astudentID) : Person(aname, aage)
{
	studentID = astudentID;
}

// 메모리 동적 할당 하지 말고 스택에 저장
void Person::getData()
{
	cout << "이름: " << name << " " << "나이: " << age << " ";
}

void Student::ShowData()
{
	getData();
	cout << "학번: "<< studentID << endl;	
}


int main()
{
	Student m1("최수정", 26, 1722507);
	m1.ShowData();

	return 0;
}