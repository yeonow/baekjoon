#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[9][9] = {};
	int max = -1, keyi = -1, keyj = -1;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &arr[i][j]);
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				keyi = i + 1;
				keyj = j + 1;
			}
		}
	}
	printf("%d\n%d %d", max, keyi, keyj);

	return 0;
}