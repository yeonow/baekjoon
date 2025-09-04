#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[20] = "";
	int t = 0, r = 0, i = 0, j = 0, count = 0, k = 0, m = 0;

	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%d%s", &r, str);
		count = 0;
		for (j = 0; j < 20; j++)
		{
			if (str[j] == 0)
			{
				break;
			}
			count++;
		}
		for (k = 0; k < count; k++)
		{
			for (m = 0; m < r; m++)
			{
				printf("%c", str[k]);
			}
		}
		if (i != t-1)
			printf("\n");
	}
	return 0;
}