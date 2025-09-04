#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, i;

	scanf("%d", &n);
	if (n == 1)
	{
		printf("%d", 1);
	}
	else
	{
		n--;
		for (i = 0; n > 0; i++)
		{
			n -= 6 * i;
		}
		printf("%d", i);
	}
	
	return 0;
}