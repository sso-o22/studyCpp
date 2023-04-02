#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;  // ���̸� ��, �����̸� ��
}

int main()
{
	cout << Max(11, 15) << endl;  // 11 > 15 ���� -> �� : 15
	cout << Max('T', 'Q') << endl;  // T�� Q���� �ڿ� ���� (T > Q) : �� -> T
	cout << Max(3.5, 7.5) << endl;  // 3.5 > 7.5 ���� -> 7.5
	cout << Max("Simple", "Best") << endl;  // ���̺� �ȵǾ� ���� -> S > B �� : �� -> Simple
	return 0;
}