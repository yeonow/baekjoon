#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int num = 0, count = 0;
	char word[100] = "";

	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		int a = 1;
		scanf("%s", word);
		for (int j = 0; j < strlen(word) - 1; j++)
		{
			for (int k = j + 1; k < strlen(word); k++)
			{
				if (word[j] == word[k])
				{
					if (word[k] != word[k - 1])
					{
						a = 0;
						break;
					}
				}
			}
		}
		if (a == 1)
		{
			count++;
		}
	}
	printf("%d", count);

	return 0;
}