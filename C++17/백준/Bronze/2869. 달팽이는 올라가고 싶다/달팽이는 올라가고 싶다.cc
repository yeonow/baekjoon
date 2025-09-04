#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0, b = 0, v = 0, count = 0, k = 0;

	scanf("%d%d%d", &a, &b, &v);
	count = (v - b - 1) / (a - b) + 1;
	printf("%d", count);

	return 0;
}