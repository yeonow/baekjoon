#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0, i, j, k;
	scanf("%d", &num);
	for (i = 1; i < num + 1; i++)
	{
		for (j = num - i; j > 0; j--)
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}
	for (i = num - 1; i >= 0; i--)
	{
		for (j = 0; j < num - i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * i - 1; k++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}
	return 0;
}