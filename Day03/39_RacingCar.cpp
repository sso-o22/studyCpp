#include <iostream>
using namespace std;

#define ID_LEN	20
#define MAX_SPD	200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

struct Car
{
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;
};

void ShowCarState(const Car& car)  // ���� ���� ����ϴ� �Լ�
{
	cout << "������ID: " << car.gamerID << endl;
	cout << "���ᷮ: " << car.fuelGauge<< "%" << endl;
	cout << "����ӵ�: " << car.curSpeed << "km/s" << endl << endl;
}

void Accel(Car& car)  // ���� ����� �� : ���� ����, ���ǵ� ����
{
	if (car.fuelGauge <= 0)
		return;
	else
		car.fuelGauge -= FUEL_STEP;

	if (car.curSpeed + ACC_STEP >= MAX_SPD)
	{
		car.curSpeed = MAX_SPD;
		return;
	}
	car.curSpeed += ACC_STEP;
}

void Break(Car& car) // �극��ũ ����� �� : �ӵ� ����
{
	if (car.curSpeed < BRK_STEP)
	{
		car.curSpeed = 0;
		return;
	}

	car.curSpeed -= BRK_STEP;
}

int main(void)
{
	Car run99 = { "run99", 100, 0 };  // ����ü ���� ���� �� �ʱ�ȭ
	// ������ �극��ũ ���� ��Ȳ
	Accel(run99);  
	Accel(run99);
	ShowCarState(run99);  // ���� �ι� ������ : ���ᷮ 100 -2 -2 = 96 / �ӵ� 0 +10 +10 = 20
	Break(run99);
	ShowCarState(run99);  // �극��ũ �ѹ� ������ : ���ᷮ ���� = 96 / �ӵ� 20 - 10 = 10

	Car sped77 = { "speed77", 100, 0 };
	Accel(sped77);  // ���� �ѹ� ������ : ���ᷮ 100 -2  = 98 / �ӵ� 0 +10 = 10
	Break(sped77);  // �극��ũ �ѹ� ������ : ���ᷮ ���� = 98 / �ӵ� 10 - 10 = 0
	ShowCarState(sped77);

	return 0;
}