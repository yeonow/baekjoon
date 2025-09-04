#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0, m = 0, k = 0, i = 0, j = 0, l = 0, a = 0;
	int num[100] = {};

	scanf("%d%d", &n, &m);



	for (k = 0; k < n; k++)
	{
		num[k] = k + 1;
	}
	for (k = 0; k < m; k++)
	{
		scanf("%d %d", &i, &j);
		while (i < j)
		{
			if (i >= j)
			{
				break;
			}
			a = num[i - 1];
			num[i - 1] = num[j - 1];
			num[j - 1] = a;
			i++;
			j--;
		}
	}
	for (k = 0; k < n; k++)
	{
		printf("%d ", num[k]);
	}
	return 0;
}