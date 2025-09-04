#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0, m = 0;
	int mat1[105][105] = {}, mat2[105][105] = {};

	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &mat1[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &mat2[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", mat1[i][j] + mat2[i][j]);
		}
		printf("\n");
	}
	return 0;
}