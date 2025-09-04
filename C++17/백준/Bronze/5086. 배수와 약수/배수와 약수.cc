#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1 = 0, num2 = 0;
	while (1)
	{
		scanf("%d%d", &num1, &num2);
		if (num1 == 0 && num2 == 0)
		{
			break;
		}
		if (num1 > num2)
		{
			if (num1 % num2 == 0)
			{
				printf("%s\n", "multiple");
			}
			else
				printf("%s\n", "neither");
		}
		else
		{
			if (num2 % num1 == 0)
			{
				printf("%s\n", "factor");
			}
			else
				printf("%s\n", "neither");
		}
	}
	return 0;
}