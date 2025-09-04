#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t = 0, i = 0, j = 0;
	char string[1000] = "";

	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%s", &string);
		for (j = 0; j < 1000; j++)
		{
			if (string[j] == 0)
			{
				j--;
				break;
			}
		}
		printf("%c%c\n", string[0], string[j]);
	}
	return 0;
}