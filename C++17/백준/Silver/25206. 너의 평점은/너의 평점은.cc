#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double credit = 0, total = 0, score = 0, sum = 0, ave = 0;
	char grade[5] = "";
	char word[55] = "";

	for (int i = 0; i < 20; i++)
	{
		scanf("%s %lf %s", word, &credit, grade);
		if (grade[0] == 'P')
			continue;
		else if (grade[0] == 'A')
		{
			if (grade[1] == '+')
				score = 4.5;
			else if (grade[1] == '0')
				score = 4.0;
		}
		else if (grade[0] == 'B')
		{
			if (grade[1] == '+')
				score = 3.5;
			else if (grade[1] == '0')
				score = 3.0;
		}
		else if (grade[0] == 'C')
		{
			if (grade[1] == '+')
				score = 2.5;
			else if (grade[1] == '0')
				score = 2.0;
		}
		else if (grade[0] == 'D')
		{
			if (grade[1] == '+')
				score = 1.5;
			else if (grade[1] == '0')
				score = 1.0;
		}
		else if (grade[0] == 'F')
			score = 0.0;
		sum += (credit * score);
		total += credit;
	}
	ave = sum / total;
	printf("%.6lf", ave);

	return 0;
}