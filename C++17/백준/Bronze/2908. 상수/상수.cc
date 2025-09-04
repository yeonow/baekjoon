#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char num1[5] = "", num2[5] = "";
	int i = 0, answer = 0;

	scanf("%s %s", num1, num2);

	for (i = 2; i >= 0; i--)
	{
		if ((int)num1[i] > (int)num2[i])
		{
			answer = 1;
			break;
		}
		else if ((int)num1[i] < (int)num2[i])
		{
			answer = 0;
			break;
		}
	}
	for (i = 2; i >=0; i--)
	{
		if (answer == 1)
			printf("%c", num1[i]);
		else
			printf("%c", num2[i]);
	}
	return 0;
}