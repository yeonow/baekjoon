#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int n = 0;
	scanf("%d", &n);

	printf("%.lf", pow(pow(2, n) + 1, 2));
	return 0;
}