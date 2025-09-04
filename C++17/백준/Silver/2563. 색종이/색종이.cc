#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0, a = 0, b = 0, count = 0;
	int ab[101][101] = { 0 };
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				ab[a + j - 1][b + k - 1] = 1;
			}
		}
	}
	
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (ab[i][j] == 1)
				count++;
		}
	}
	printf("%d", count);
}