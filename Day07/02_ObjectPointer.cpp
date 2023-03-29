#include <iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student : public Person  // Person 상속받는 Student 클래스
{
public:
	void Study() { cout << "Study" << endl; }
};

class PartTimeStudent : public Student  // Student 상속받는 PartTimeStudent 클래스 (+ Person 클래스 간접 상속 받음)
{
public:
	void Work() { cout << "Work" << endl; }
};

int main()
{
	// 가리킴
	Person* ptr1 = new Student();  // super -> sub
	Person* ptr2 = new PartTimeStudent();  // super -> sub
	Student* ptr3 = new PartTimeStudent();  // super -> sub
	// 접근
	ptr1->Sleep();  // Person -> Person
	ptr2->Sleep();  // Person -> Person
	ptr3->Study();  // Student -> Student
	ptr3->Sleep();  // Student -> Person

	// 가리킴
	PartTimeStudent* ptr4 = new PartTimeStudent();
	// 접근
	ptr4->Sleep();  // PartTimeStudent -> Person
	ptr4->Study();  // PartTimeStudent -> Student
	ptr4->Work();  // PartTimeStudent -> PartTimeStudent

	/*
	// 가리킴
	Person* ptr5 = new PartTimeStudent();
	// 접근
	ptr5->Sleep();  // Person -> Person
	ptr5->Study();  // Person -> Student (오류)
	ptr5->Work();  // Person -> PartTimeStudent (오류)
	*/

	delete ptr1; delete ptr2; delete ptr3; delete ptr4;

	return 0;
}