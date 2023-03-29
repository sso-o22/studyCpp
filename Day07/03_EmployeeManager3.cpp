#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
	char name[100];
public:
	Employee(const char* name)  // 생성자
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout << "name: " << name << endl;
	}
};

class PermanentWorker : public Employee  // Employee 클래스의 상속 받음
{
private:
	int salary;
public:
	PermanentWorker(const char *name, int money) : Employee(name), salary(money) { }
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const  // TemporaryWorker의 ShowSalaryInfo와 이름 같지만 자기자신꺼
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class TemporaryWorker : public Employee
{
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(const char * name, int pay) 
		: Employee(name), workTime(0), payPerHour(pay) { }
	void AddWorkTime(int time)
	{
		workTime += time; 
	}
	int GetPay() const
	{
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const  // PermanentWorker의 ShowSalaryInfo와 이름 같지만 자기자신꺼
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;  // 월 판매실적
	double bonusRatio;  // 상여금 비율
public:
	SalesWorker(const char* name, int money, double ratio)
		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) { }
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
	}
	void ShowSalaryInfo() const  // 함수 오버라이딩 (PermanentWorker와 상속관계)
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0) { }
	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		/*
		for(int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		*/
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler()  // 소멸자
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main()
{
	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체 생성
	EmployeeHandler handler;

	// 정규직 등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	// 임시직 등록
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);  // 5시간 일한 결과 등록
	handler.AddEmployee(alba);

	// 영업직 등록
	SalesWorker * seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);  // 영업실적 7000
	handler.AddEmployee(alba);

	// 이번 달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();

	// 이번 달에 지불해야 할 급여의 총합
	handler.ShowTotalSalary();

	return 0;
}


/*
배열 포인터, 포인터 배열
- 배열포인터는 포인터인데 배열을 가리키는 포인터
- 포인터배열은 배열인데 포인터로 이루어진 배열

1. 포인터배열
int n1 = 10, n2 = 20, n3 = 30;
int* ary[3] = {&n1, &n2, &n3};  // 포인터배열

2. 배열포인터
int* pa = &a;  // * : 연산자 아님, 그냥 표시
int ary[3] = {1, 2, 3};
int (* pary) = ary;  // 1차원 배열을 가리키는 배열 포인터 / 배열이름은 주소다! -> 주소연산자 없이 배열이름 넣으면 됨
ㄴ1차원 배열은 괄호 안써도 됨

int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};  // 2차원 배열
int (* parr)[3] = arr;  // 2차원 배열을 가리키는 배열 포인터 (열값만 적어줌)
int* parr[3] = arr;  // 괄호 없으면 포인터배열
*/