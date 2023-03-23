//#include <iostream>
#include <stdio.h>
//using namespace std;

enum week
{
	sun = 0, 
	mon = 1,
	tue,  // 자동으로 매칭
	wed  // 자동으로 매칭
};

int main()
{
	printf("%d\n", sun);
	printf("%d\n", tue);
	printf("%d\n", wed);

	return 0;
}