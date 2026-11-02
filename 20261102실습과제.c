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

	// 01. 점수 생성 (0~100점 난수)
	for (int i = 0; i < SIZE; i++) {
		score[i] = rand() % 101;
	}

	// 최댓값, 최솟값 초기화
	max = score[0];
	min = score[0];

	// 최댓값, 최솟값, 합계 구하기
	for (int i = 0; i < SIZE; i++) {
		if (score[i] > max) max = score[i];
		if (score[i] < min) min = score[i];
		sum += score[i];
	}

	// 평균 계산
	avg = (double)sum / SIZE;

	// 03. 결과 출력 (영문 출력으로 인코딩 오류 방지)
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