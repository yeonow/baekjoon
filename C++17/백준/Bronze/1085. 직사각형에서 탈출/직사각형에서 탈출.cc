#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int x, y, w, h;
	int min = 0;
	scanf("%d%d%d%d", &x, &y, &w, &h);
	if (w - x > x)
	{
		if (h - y > y)
		{
			min = (x > y) ? y : x;
		}
		else
			min = (x > h - y) ? h - y : x;
	}
	else
	{
		if (h - y > y)
		{
			min = (w - x > y) ? y : w - x;
		}
		else
			min = (w - x > h - y) ? h - y : w - x;
	}
	printf("%d", min);
	return 0;
}