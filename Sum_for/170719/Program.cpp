#include <stdio.h>

int Sum(int n)
{
	int result = 0, i = 0;
	for (i = 1; i <= n; i++)
	{
		result += i;
	}

	return result;
}

int main()
{
	int input1 = 0, result = 0, i = 0;

	printf("1 부터 n 까지 합을 구합니다.\nn 값을 입력하세요 : ");
	scanf("%d", &input1);

	result = Sum(input1);

	printf("1 ~ %d 합 = %d\n", input1, result);
	return 0;
}