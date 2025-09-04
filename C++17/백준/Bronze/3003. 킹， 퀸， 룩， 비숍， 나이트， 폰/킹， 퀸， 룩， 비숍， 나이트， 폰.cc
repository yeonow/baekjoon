#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int count[] = { 1, 1, 2, 2, 2, 8 }, num[6] = {};
	int i = 0;

	for (i = 0; i < 6; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == count[i])
		{
			num[i] = 0;
		}
		else
			num[i] = count[i] - num[i];
	}
	for (i = 0; i < 6; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}