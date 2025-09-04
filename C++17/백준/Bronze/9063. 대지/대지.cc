#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	int point[100000][2] = { 0 };
	int maxx, maxy, minx, miny;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &point[i][0], &point[i][1]);
	}
	maxx = point[0][0];
	minx = point[0][0];
	maxy = point[0][1];
	miny = point[0][1];
	for (int i = 1; i < n; i++)
	{
		if (maxx < point[i][0])
			maxx = point[i][0];
		else if (minx > point[i][0])
			minx = point[i][0];
		if (maxy < point[i][1])
			maxy = point[i][1];
		else if (miny > point[i][1])
			miny = point[i][1];
	}
	printf("%d", (maxx - minx) * (maxy - miny));

	return 0;
}