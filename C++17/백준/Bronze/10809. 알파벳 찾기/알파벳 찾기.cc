#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s[100] = "";
	int alpha[26] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	int i = 0, count = 0, j = 0, k = 0;
	char c = 'a';

	scanf("%s", &s);
	for (i = 0; i < 100; i++)
	{
		if (s[i] == 0)
		{
			break;
		}
		else
		{
			count++;
		}
	}
	for (i = 0; i < count; i++)
	{
		c = 'a';
		k = 0;
		for (j = 0; j < 26; j++)
		{
			if (c == s[i])
			{
				if (alpha[j] != -1)
					break;
				alpha[j] = i;
				break;
			}
			c++;
			k++;
		}
	}
	for (i = 0; i < 26; i++)
	{
		printf("%d ", alpha[i]);
	}

	return 0;
}