#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t = 0;
	int count[4];
	int price[5] = { 25, 10, 5, 1 };
	
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int amount = 0;
		scanf("%d", &amount);
		for (int j = 0; j < 4; j++)
		{
			count[j] = amount / price[j];
			amount %= price[j];
		}
		for (int k = 0; k < 4; k++)
		{
			printf("%d ", count[k]);
		}
		printf("\n");
	}
	return 0;
}