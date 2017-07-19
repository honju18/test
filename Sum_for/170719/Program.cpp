#include <stdio.h>

int main()
{
	int input1 = 0, result = 0, i = 0;

	printf("1 부터 n 까지 합을 구합니다.\nn 값을 입력하세요 : ");
	scanf("%d", &input1);

	for (i = 1; i <= input1; i++)
	{
		result += i;
	}

	printf("1 ~ %d 합 = %d\n", input1, result);
	return 0;
}