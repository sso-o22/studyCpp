#include <iostream>
#include "54_Point.h"
using namespace std;

// ������Ͽ��� ������ �Լ��� ����
bool Point::InitMembers(int xpos, int ypos)
{
	if (xpos < 0 || ypos < 0)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}

	x = xpos;
	y = ypos;
	return true;
}

int Point::GetX() const  // �������Լ�
{
	return x;
}

int Point::GetY() const  // �������Լ�
{
	return y;
}

bool Point::SetX(int xpos)
{
	if (0 > xpos  || xpos > 100)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xpos;
	return true;
}
bool Point::SetY(int ypos)
{
	if (0 > ypos || ypos > 100)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	y = ypos;
	return true;
}