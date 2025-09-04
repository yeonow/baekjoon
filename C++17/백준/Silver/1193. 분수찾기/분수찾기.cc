#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int count = 0, i, j, line = 1, a, b;

	scanf("%d", &count);
	while (count > line)
	{
		count -= line;
		line++;
	}

	if (line % 2 == 0)
	{
		a = count;
		b = line - count + 1;
	}
	else if (line % 2 != 0)
	{
		a = line - count + 1;
		b = count;
	}
	printf("%d/%d", a, b);
	return 0;
}