#include <iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student : public Person  // Person ��ӹ޴� Student Ŭ����
{
public:
	void Study() { cout << "Study" << endl; }
};

class PartTimeStudent : public Student  // Student ��ӹ޴� PartTimeStudent Ŭ���� (+ Person Ŭ���� ���� ��� ����)
{
public:
	void Work() { cout << "Work" << endl; }
};

int main()
{
	// ����Ŵ
	Person* ptr1 = new Student();  // super -> sub
	Person* ptr2 = new PartTimeStudent();  // super -> sub
	Student* ptr3 = new PartTimeStudent();  // super -> sub
	// ����
	ptr1->Sleep();  // Person -> Person
	ptr2->Sleep();  // Person -> Person
	ptr3->Study();  // Student -> Student
	ptr3->Sleep();  // Student -> Person

	// ����Ŵ
	PartTimeStudent* ptr4 = new PartTimeStudent();
	// ����
	ptr4->Sleep();  // PartTimeStudent -> Person
	ptr4->Study();  // PartTimeStudent -> Student
	ptr4->Work();  // PartTimeStudent -> PartTimeStudent

	/*
	// ����Ŵ
	Person* ptr5 = new PartTimeStudent();
	// ����
	ptr5->Sleep();  // Person -> Person
	ptr5->Study();  // Person -> Student (����)
	ptr5->Work();  // Person -> PartTimeStudent (����)
	*/

	delete ptr1; delete ptr2; delete ptr3; delete ptr4;

	return 0;
}