#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j, count = 0, answer = 1;
	char word[100] = "";
	
	scanf("%s", word);
	for (i = 0; i < 100; i++)
	{
		if (word[i] != '\0')
		{
			count++;
		}
	}
	for (j = 0; j < count/2 ; j++)
	{
		if (word[j] != word[count-1 - j])
		{
			answer = 0;
			break;
		}
	}
	printf("%d", answer);
	return 0;
}