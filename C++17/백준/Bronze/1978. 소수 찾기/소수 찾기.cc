#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findPrimenum(int d[], int n);

int main() {
	int n;
	int d[1000] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &d[i]);
	}
	printf("%d", findPrimenum(d, n));

	return 0;
}

int findPrimenum(int d[], int n)
{
	int i, j, count = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 2; j < d[i]; j++)
		{
			if (d[i] % j == 0)
				break;
		}
		if (j == d[i])
			count++;
	}
	return count;
}