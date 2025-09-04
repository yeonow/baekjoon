#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n1, n2;
	int c;
	int n0;

	scanf("%d%d", &n1, &n2);
	scanf("%d", &c);
	scanf("%d", &n0);

	if ((n1 * n0 + n2 <= c * n0) && n1 <= c)
		printf("1");
	else
		printf("0");

	return 0;
}