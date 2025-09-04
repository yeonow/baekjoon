#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char word[100] = "";
	int count = 0, i = 0;

	scanf("%s", &word);
	for (i = 0; i < 100; i++)
	{
		if (word[i] == 0)
			break;
		else {
			count++;
		}
	}
	printf("%d", count);
}