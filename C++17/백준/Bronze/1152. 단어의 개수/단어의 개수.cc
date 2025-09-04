#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int count = 0, i = 0, ans = 0;
	char str[1000005] = "";

	scanf("%[^\n]s", str);

	for (i = 0; i < 1000005; i++)
	{
		if (str[i] == '\0')
			break;
		count++;
	}
	if (str[0] != ' ')
		ans++;
	for (i = 1; i < count; i++)
	{
		if (str[i - 1] == ' ' && str[i] != ' ')
			ans++;
	}

	printf("%d", ans);
	return 0;
}