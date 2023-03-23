#include <iostream>
using namespace std;

class FruitSeller  // 판매자 클래스
{
private:  // 판매자 클래스내 함수에서만 사용되는 변수
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSaleResult()
	{
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매수익: " << myMoney << endl << endl;
	}
};

class FruitBuyer  // 구매자 클래스
{
	int myMoney;  // private 생략 / 구매자 클래스내 함수에서만 사용되는 변수
	int numOfApples;  //private 생략 / 구매자 클래스내 함수에서만 사용되는 변수

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller& seller, int money)
	{
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult()
	{
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);  // 판매자 사과 20개 가지고 있음
	FruitBuyer buyer;
	buyer.InitMembers(5000);  // 구매자 5000원 가지고 있음
	buyer.BuyApples(seller, 2000);  // 구매자 2000원 지불 -> 

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSaleResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}