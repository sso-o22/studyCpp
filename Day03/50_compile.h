#pragma once

#ifndef __COMPILE_H__  // if not define / �ߺ� ������ ����
#define __COMPILE_H__

#include <iostream>

class Myclass
{
	int m_num;
public:
	void set(int n)
	{
		m_num = n;
	}
	void get()
	{
		std::cout << "m_num: " << m_num << std::endl;
	}
};

#endif