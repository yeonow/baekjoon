#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n = 0;

	scanf("%d", &n);

	printf("%.lf\n", (double)1/2 * n * (n-1));
	printf("2");

	return 0;
}