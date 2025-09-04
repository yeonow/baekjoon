#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n = 0, b = 0, i = 0;
	char value = 0;
	char v[100000] = "";
	scanf("%d%d", &n, &b);

	while (n != 0)
	{
		if (n % b >= 0 && n % b <= 9)
		{
			value = '0' + (n % b);
			v[i] = value;
			i++;
		}
		else if (n % b >= 10 && n % b <= b)
		{
			value = 'A' + (n % b - 10);
			v[i] = value;
			i++;
		}
		n /= b;
	}
	for (int i = strlen(v) - 1; i >= 0; i--)
	{
		printf("%c", v[i]);
	}
	return 0;
}