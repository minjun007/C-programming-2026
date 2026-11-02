#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
	int score[SIZE];
	int max, min;
	int sum = 0;
	double avg;

	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) {
		score[i] = rand() % 101;
	}

	max = score[0];
	min = score[0];

	for (int i = 0; i < SIZE; i++) {
		if (score[i] > max) max = score[i];
		if (score[i] < min) min = score[i];
		sum += score[i];
	}

	avg = (double)sum / SIZE;

	printf("=== Student Scores ===\n");
	for (int i = 0; i < SIZE; i++) {
		printf("Student %d: %d\n", i + 1, score[i]);
	}

	printf("\n=== Statistics ===\n");
	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
	printf("Avg: %.2f\n", avg);

	return 0;
}