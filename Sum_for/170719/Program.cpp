#include <stdio.h>

int main()
{
	int input1 = 0, result = 0, i = 0;

	printf("1 ���� n ���� ���� ���մϴ�.\nn ���� �Է��ϼ��� : ");
	scanf("%d", &input1);

	for (i = 1; i <= input1; i++)
	{
		result += i;
	}

	printf("1 ~ %d �� = %d\n", input1, result);
	return 0;
}