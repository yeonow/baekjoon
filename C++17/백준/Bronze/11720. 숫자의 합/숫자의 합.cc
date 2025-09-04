#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0, m = 0, i = 0, total = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%1d", &m);
		total += m;
	}
	printf("%d", total);
	return 0;
}