#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void primecheck(int n);

int main() {
	int n = 0;
	int i = 2;
	scanf("%d", &n);
	
	while (1)
	{
		if (n <= 0 || i > n)
			break;
		
		
		if (n % i == 0)
		{
			printf("%d\n", i);
			n /= i;
		}
		else
			i++;
	}
}