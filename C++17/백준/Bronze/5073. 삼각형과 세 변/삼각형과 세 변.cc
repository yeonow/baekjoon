#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	
	while (1)
	{
		scanf("%d%d%d", &a, &b, &c);

		if (a == b && b == c && b == 0)
			break;

		int max = ((a > b) ? a : b) > c ? ((a > b) ? a : b) : c;
		int min = ((a > b) ? b : a) > c ? c : ((a > b) ? b : a);
		int mid = (((a > b) ? a : b) > c ? c : ((a > b) ? a : b)) > ((a > b) ? b : a) ? (((a > b) ? a : b) > c ? c : ((a > b) ? a : b)) : ((a > b) ? b : a);
		if (max < min + mid)
		{
			if (a == b && b == c)
			{
				printf("Equilateral\n");
			}
			else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
			{
				printf("Isosceles\n");
			}
			else if (a != b && b != c && b != a)
			{
				printf("Scalene\n");
			}
		}
		else
			printf("Invalid\n");
	}
}