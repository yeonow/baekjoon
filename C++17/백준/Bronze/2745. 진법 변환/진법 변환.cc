#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	char str[1000] = "";
	int n = 0, num = 0, value = 0;

	scanf("%s %d", str, &n);
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			value = (str[i] - '0');
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			value = 10 + (str[i] - 'A');
		}
		num += pow(n, strlen(str) - i - 1) * value;
	}
	printf("%d", num);
	return 0;
}