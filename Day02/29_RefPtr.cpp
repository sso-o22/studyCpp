#include <iostream>
using namespace std;

int main()
{
	int num = 12;
	int *ptr = &num;  // 포인터변수 선언(주소값 집어넣을 수 있음) / num의 주소값을 ptr에 넣음
	int **dptr = &ptr;  // 이중 포인터변수 선언 / ptr(포인터변수)의 주소값을 dptr에 넣음(ptr은 포인터변수이므로 이중포인터변수)

	int &ref = num;  // 참조자변수 선언 / num대신 ref라는 이름으로 접근할 수 있도록(별칭)
	int *(&pref) = ptr;  // 참조자를 만드는데 포인터변수 타입으로 선언(ptr은 주소이므로) / pref라는 이름으로 접근할 수 있도록
	int **(&dpref) = dptr;  // 이중포인터 변수를 참조하는 참조자 선언 / dpref라는 이름으로 접근할 수 있도록
	
	// 참조자는 내가 참조하는 변수의 타입에 맞추면 됨

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

	return 0;
}