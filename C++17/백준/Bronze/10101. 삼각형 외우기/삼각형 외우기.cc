#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int angle1, angle2, angle3;
	scanf("%d%d%d", &angle1, &angle2, &angle3);
	
	if (angle1 + angle2 + angle3 == 180) {
		if ((angle1 == angle2) && (angle2 == angle3))
			printf("Equilateral");
		else if (((angle1 == angle2) && (angle1 != angle3)) || ((angle1 == angle3) && (angle1 != angle2)) || ((angle2 == angle3) && (angle1 != angle2)))
			printf("Isosceles");
		else if ((angle1 != angle2) && (angle2 != angle3))
			printf("Scalene");


	}
	else
		printf("Error");

	return 0;
}