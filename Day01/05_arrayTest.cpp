# include <iostream>

int main()
{
	char ch[5] = "hong";  // 배열 선언 / 문자열 -> 마지막에 null값 / literal 상수
	ch[0] = 'h'; // 문자 하나씩 저장
	ch[1] = 'o';
	ch[2] = 'n';
	ch[3] = 'g';
	ch[4] = 'a';

	for (int i = 0; i < 5; i++) { 
		printf("%c", ch[i]);
	}

	//printf("char 크기: %d\n", sizeof(char));
	//printf("%s\n", ch);  // 오류 -> 문자열인지 모름 / %s : null값 있는 곳 앞까지 출력
	//printf("ch[4] : %c\n", ch[4]);
	//printf("cha[4] : %s\n", ch[4]);
	// ch[0] = 'h';
	printf("배열이름 ch: %p\n", ch);
	printf("배열주소 ch: %p\n", &ch);
	return 0;
}