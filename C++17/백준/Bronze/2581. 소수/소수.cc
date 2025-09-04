#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int m, n, j, total = 0, min = 0;
	scanf("%d%d", &m, &n);
	for (int i = m; i <= n; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			if (total == 0)
				min = i;
			total += i;	
		}
	}
	if (total == 0)
	{
		printf("%d", -1);
	}
	else
		printf("%d\n%d", total, min);

	return 0;
}