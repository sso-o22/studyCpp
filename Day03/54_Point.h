#pragma once
#ifndef __POINT_H_
#define __POINT_H_

class Point
{
private:  // ������ �� ���� ���� -> x, y ���� ����
	int x;
	int y;

public:  // ���� ���� �� ������ ���� �Լ� �߰��� ���� -> �Լ� ������ ��������� ����Ǵ� �� ���� ����
	bool InitMembers(int xpos, int posy);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};
#endif