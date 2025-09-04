#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	
	int max = ((a > b) ? a : b) > c ? ((a > b) ? a : b) : c;
	int min, mid;
	if (max == a)
	{
		min = b > c ? c : b;
		mid = b > c ? b : c;
	}
	else if (max == b)
	{
		min = a > c ? c : a;
		mid = a > c ? a : c;
	}
	else
	{
		min = a > b ? b : a;
		mid = a > b ? a : b;
	}

	if (max < min + mid)
		printf("%d", a + b + c);
	else
	{
		printf("%d", min + mid + (min + mid - 1));
	}

	return 0;
}