#pragma once
#ifndef __POINT_H_
#define __POINT_H_

class Point
{
private:  // 임의의 값 저장 방지 -> x, y 정보 은닉
	int x;
	int y;

public:  // 값의 저장 및 참조를 위한 함수 추가로 선언 -> 함수 내에서 멤버변수에 저장되는 값 제한 가능
	bool InitMembers(int xpos, int posy);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};
#endif