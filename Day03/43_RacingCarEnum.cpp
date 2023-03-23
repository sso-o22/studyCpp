#include <iostream>
using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN		= 20,
		MAX_SPD		= 200,
		FUEL_STEP	= 2,
		ACC_STEP	= 10,
		BRK_STEP	= 10
	};
}
 
struct Car
{
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState()  // 차의 정보 출력하는 함수
	{
		cout << "소유자ID: " << gamerID << endl;
		cout << "연료량: " << fuelGauge << "%" << endl;
		cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
	}

	void Accel()  // 엑셀 밟았을 때 : 연료 감소, 스피드 증가
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= CAR_CONST::FUEL_STEP;

		if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
		{
			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}
		curSpeed += CAR_CONST::ACC_STEP;
	}

	void Break() // 브레이크 밟았을 때 : 속도 감소
	{
		if (curSpeed < CAR_CONST::BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_CONST::BRK_STEP;
	}
};

int main(void)
{
	Car run99 = { "run99", 100, 0 };  // 구조체 변수 선언 및 초기화
	// 엑셀과 브레이크 밟은 상황
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();  // 엑셀 두번 밟으면 : 연료량 100 -2 -2 = 96 / 속도 0 +10 +10 = 20
	run99.Break();
	run99.ShowCarState();  // 브레이크 한번 밟으면 : 연료량 유지 = 96 / 속도 20 - 10 = 10

	Car sped77 = { "speed77", 100, 0 };
	sped77.Accel();  // 엑셀 한번 밟으면 : 연료량 100 -2  = 98 / 속도 0 +10 = 10
	sped77.Break();  // 브레이크 한번 밟으면 : 연료량 유지 = 98 / 속도 10 - 10 = 0
	sped77.ShowCarState();

	return 0;
}