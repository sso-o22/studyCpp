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

	void ShowCarState()  // ���� ���� ����ϴ� �Լ�
	{
		cout << "������ID: " << gamerID << endl;
		cout << "���ᷮ: " << fuelGauge << "%" << endl;
		cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;
	}

	void Accel()  // ���� ����� �� : ���� ����, ���ǵ� ����
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= FUEL_STEP;

		if (curSpeed + ACC_STEP >= MAX_SPD)
		{
			curSpeed = MAX_SPD;
			return;
		}
		curSpeed += ACC_STEP;
	}

	void Break() // �극��ũ ����� �� : �ӵ� ����
	{
		if (curSpeed < BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= BRK_STEP;
	}
};

int main(void)
{
	Car run99 = { "run99", 100, 0 };  // ����ü ���� ���� �� �ʱ�ȭ
	// ������ �극��ũ ���� ��Ȳ
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();  // ���� �ι� ������ : ���ᷮ 100 -2 -2 = 96 / �ӵ� 0 +10 +10 = 20
	run99.Break();
	run99.ShowCarState();  // �극��ũ �ѹ� ������ : ���ᷮ ���� = 96 / �ӵ� 20 - 10 = 10

	Car sped77 = { "speed77", 100, 0 };
	sped77.Accel();  // ���� �ѹ� ������ : ���ᷮ 100 -2  = 98 / �ӵ� 0 +10 = 10
	sped77.Break();  // �극��ũ �ѹ� ������ : ���ᷮ ���� = 98 / �ӵ� 10 - 10 = 0
	sped77.ShowCarState();

	return 0;
}