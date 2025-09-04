#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
	char word[1000005] = "";
	char c;
	int alpha[26] = {};

	scanf("%s", word);

	int len = strlen(word), count = 0;
	for (int i = 0; i < len; i++)
	{
		c = toupper(word[i]);
		if (c >= 'A' && c <= 'Z')
		{
			alpha[c - 'A']++;
		}
	}
	int max = 0;
	int key = 0;

	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] > max)
		{
			max = alpha[i];
			key = i;
		}
	}
	for (int j = 0; j < 26; j++)
	{
		if (alpha[j] == max)
			count++;
	}
	if (count == 1)
		printf("%c", 'A' + key);
	else
		printf("?");
	return 0;
}