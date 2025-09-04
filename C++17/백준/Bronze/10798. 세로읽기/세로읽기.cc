#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char word[5][15];
	int len = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%s", word[i]);
		if (len < strlen(word[i]))
			len = strlen(word[i]);
	}
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i < strlen(word[j]))
				printf("%c", word[j][i]);
		}
	}
	return 0;
}