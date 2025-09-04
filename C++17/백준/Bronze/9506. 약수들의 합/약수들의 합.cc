#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0;

	while (1)
	{
		int count = 0, factor[1000] = { 0 }, total = 0;

		scanf("%d", &num);
		if (num == -1)
			break;
		for (int i = 1; i <= num; i++)
		{
			if (num % i == 0)
			{
				factor[count] = i;
				count++;
			}
		}
		for (int i = 0; i < count-1; i++)
		{
			total += factor[i];
		}
		if (total == num)
		{
			printf("%d = ", num);
			for (int i = 0; i < count-1; i++)
			{
				if (i == count - 2)
				{
					printf("%d\n", factor[i]);
				}
				else
				{
					printf("%d + ", factor[i]);
				}
			}
		}
		else
			printf("%d is NOT perfect.\n", num);
	}
	return 0;
}