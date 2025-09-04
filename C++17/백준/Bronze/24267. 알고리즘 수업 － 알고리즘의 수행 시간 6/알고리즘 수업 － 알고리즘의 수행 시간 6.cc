#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int n = 0;
	scanf("%lld", &n);
	printf("%lld\n", ((n - 1) * (n - 2) * n) / 6);
	printf("3");
}