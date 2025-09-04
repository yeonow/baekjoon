#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned int n = 0;
	unsigned int total = 0;
	scanf("%u", &n);
	
	total += n * 4;
	printf("%u", total);

	return 0;
}