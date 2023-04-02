#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;  // 참이면 앞, 거짓이면 뒤
}

int main()
{
	cout << Max(11, 15) << endl;  // 11 > 15 거짓 -> 뒤 : 15
	cout << Max('T', 'Q') << endl;  // T가 Q보다 뒤에 나옴 (T > Q) : 참 -> T
	cout << Max(3.5, 7.5) << endl;  // 3.5 > 7.5 거짓 -> 7.5
	cout << Max("Simple", "Best") << endl;  // 길이비교 안되어 있음 -> S > B 비교 : 참 -> Simple
	return 0;
}