#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 0, j = 0, n = 0;
	int num[30] = {};
	for (i = 0; i < 28; i++)
	{
		scanf("%d", &n);
		for (j = 0; j < 30; j++)
		{
			if (n-1 == j)
			{
				num[j] = 1;
			}
		}
	}
	for (i = 0; i < 30; i++)
	{
		if (num[i] == 0)
		{
			printf("%d\n", i+1);
		}
	}
	return 0;
}