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

	printf("1 ���� n ���� ���� ���մϴ�.\nn ���� �Է��ϼ��� : ");
	scanf("%d", &input1);

	result = Sum(input1);

	printf("1 ~ %d �� = %d\n", input1, result);
	return 0;
}