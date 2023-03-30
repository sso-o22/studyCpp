#include <iostream>
using namespace std;

class Point
{
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) { }
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point& operator++()  // 출력 : 참조형태 / 단항연산자이므로 입력 필요없음
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}
	friend Point& operator--(Point &ref);
};

Point& operator--(Point& ref)
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

int main()
{
	/*Point pos(1, 2);
	++pos;
	pos.ShowPosition();
	--pos;
	pos.ShowPosition();

	++(++pos);
	pos.ShowPosition();
	--(--pos);
	pos.ShowPosition();*/

	int num = 10;
	cout << num++ << endl;
	cout << ++num << endl;
	return 0;
}