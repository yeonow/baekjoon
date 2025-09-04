#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0, factor[10000] = { 0 }, count = 0, n = 0;

	scanf("%d%d", &num, &n);
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			factor[count] = i;
			count++;
		}
	}
	printf("%d", factor[n - 1]);

	return 0;
}