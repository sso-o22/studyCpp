#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
	char name[100];
public:
	Employee(const char* name)  // ������
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout << "name: " << name << endl;
	}
};

class PermanentWorker : public Employee  // Employee Ŭ������ ��� ����
{
private:
	int salary;
public:
	PermanentWorker(const char *name, int money) : Employee(name), salary(money) { }
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const  // TemporaryWorker�� ShowSalaryInfo�� �̸� ������ �ڱ��ڽŲ�
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
	void ShowSalaryInfo() const  // PermanentWorker�� ShowSalaryInfo�� �̸� ������ �ڱ��ڽŲ�
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;  // �� �ǸŽ���
	double bonusRatio;  // �󿩱� ����
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
	void ShowSalaryInfo() const  // �Լ� �������̵� (PermanentWorker�� ��Ӱ���)
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
	~EmployeeHandler()  // �Ҹ���
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main()
{
	// ���������� �������� ����� ��Ʈ�� Ŭ������ ��ü ����
	EmployeeHandler handler;

	// ������ ���
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	// �ӽ��� ���
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);  // 5�ð� ���� ��� ���
	handler.AddEmployee(alba);

	// ������ ���
	SalesWorker * seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);  // �������� 7000
	handler.AddEmployee(alba);

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalaryInfo();

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowTotalSalary();

	return 0;
}


/*
�迭 ������, ������ �迭
- �迭�����ʹ� �������ε� �迭�� ����Ű�� ������
- �����͹迭�� �迭�ε� �����ͷ� �̷���� �迭

1. �����͹迭
int n1 = 10, n2 = 20, n3 = 30;
int* ary[3] = {&n1, &n2, &n3};  // �����͹迭

2. �迭������
int* pa = &a;  // * : ������ �ƴ�, �׳� ǥ��
int ary[3] = {1, 2, 3};
int (* pary) = ary;  // 1���� �迭�� ����Ű�� �迭 ������ / �迭�̸��� �ּҴ�! -> �ּҿ����� ���� �迭�̸� ������ ��
��1���� �迭�� ��ȣ �Ƚᵵ ��

int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};  // 2���� �迭
int (* parr)[3] = arr;  // 2���� �迭�� ����Ű�� �迭 ������ (������ ������)
int* parr[3] = arr;  // ��ȣ ������ �����͹迭
*/