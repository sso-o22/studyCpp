#include <iostream>

int main()
{	
	int size;
	int* arr;

	printf("배열 개수: ");
	scanf_s("%d", &size);

	arr = (int*)malloc(sizeof(int) * size);

	printf("%d개의 숫자를 입력하세요.\n", size);
	for (int i = 0; i < size; i++)
	{
		printf("%d번째 숫자: ", i + 1);
		scanf_s("%d", arr + i);
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
		printf("%d\n", *(arr + i));
	}

	free(arr);

	return 0;
}