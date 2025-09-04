#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 0, j = 0, count = 0, a = 0, k = 1;
	int num[10] = {};

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		num[i] = a % 42;
		for (j = 0; j < i; j++)
		{
			if (num[i] != num[j])
			{
				k = 1;
			}
			else
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}