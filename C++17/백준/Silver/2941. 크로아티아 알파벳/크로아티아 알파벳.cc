#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char word[100] = "";
	int len = 0, count = 0;
	
	scanf("%s", word);
	len = strlen(word);
	for (int i = 0; i < len; i++)
	{
		if (word[i] == 'c')
		{
			if (word[i + 1] == '=' || word[i + 1] == '-')
			{
				count++;
				i++;
			}
			else
				count++;
		}
		else if (word[i] == 'd')
		{
			if (word[i + 1] == '-')
			{
				count++;
				i++;
			}
			else if (word[i + 1] == 'z' && word[i + 2] == '=')
			{
				count++;
				i += 2;
			}
			else
				count++;
		}
		else if (word[i] == 'l' && word[i + 1] == 'j')
		{
			count++;
			i++;
		}
		else if (word[i] == 'n' && word[i + 1] == 'j')
		{
			count++;
			i++;
		}
		else if (word[i] == 's' && word[i + 1] == '=')
		{
			count++;
			i++;
		}
		else if (word[i] == 'z' && word[i + 1] == '=')
		{
			count++;
			i++;
		}
		else
			count++;
	}
	printf("%d", count);
}