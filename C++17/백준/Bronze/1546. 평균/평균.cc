#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0, m = 0, i = 0, max = 0;
	double total = 0, ave = 0;
	int num[1000] = {};
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] > max)
		{
			max = num[i];
		}
	}
	for (i = 0; i < n; i++)
	{
		total += (double)num[i] / max * 100;
	}
	ave = total / n;
	printf("%lf", ave);
	return 0;
}