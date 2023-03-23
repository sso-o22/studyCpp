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

void ShowCarState(const Car& car)  // 차의 정보 출력하는 함수
{
	cout << "소유자ID: " << car.gamerID << endl;
	cout << "연료량: " << car.fuelGauge<< "%" << endl;
	cout << "현재속도: " << car.curSpeed << "km/s" << endl << endl;
}

void Accel(Car& car)  // 엑셀 밟았을 때 : 연료 감소, 스피드 증가
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

void Break(Car& car) // 브레이크 밟았을 때 : 속도 감소
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
	Car run99 = { "run99", 100, 0 };  // 구조체 변수 선언 및 초기화
	// 엑셀과 브레이크 밟은 상황
	Accel(run99);  
	Accel(run99);
	ShowCarState(run99);  // 엑셀 두번 밟으면 : 연료량 100 -2 -2 = 96 / 속도 0 +10 +10 = 20
	Break(run99);
	ShowCarState(run99);  // 브레이크 한번 밟으면 : 연료량 유지 = 96 / 속도 20 - 10 = 10

	Car sped77 = { "speed77", 100, 0 };
	Accel(sped77);  // 엑셀 한번 밟으면 : 연료량 100 -2  = 98 / 속도 0 +10 = 10
	Break(sped77);  // 브레이크 한번 밟으면 : 연료량 유지 = 98 / 속도 10 - 10 = 0
	ShowCarState(sped77);

	return 0;
}