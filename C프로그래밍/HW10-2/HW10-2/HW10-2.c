#include <stdio.h>

#define NUM_EXAM 3
#define NUM_STUDENT 5

int find_min(int score[NUM_EXAM][NUM_STUDENT], int exam) {
	int i, min;
	min = score[exam][0];
	for (i = 1; i < NUM_STUDENT; i++) {
		if (score[exam][i] < min) {
			min = score[exam][i];
		}
	}
	return min;
}
int find_max(int score[NUM_EXAM][NUM_STUDENT], int exam) {
	int i, max;
	max = score[exam][0];
	for (i = 1; i < NUM_STUDENT; i++) {
		if (score[exam][i] > max) {
			max = score[exam][i];
		}
	}
	return max;
}
double comp_avg(int score[NUM_EXAM][NUM_STUDENT], int exam) {
	int i;
	int sum = 0;
	double avg;
	for (i = 0; i < NUM_STUDENT; i++) {
		sum = sum + score[exam][i];
	}
	avg = (double)sum / NUM_STUDENT;
	return avg;
}
int main(void) {
	int exam;
	int score[NUM_EXAM][NUM_STUDENT] = {
		{60, 80, 43, 78, 93},
		{75, 59, 81, 77, 81},
		{83, 74, 97, 73, 81}
	};

	printf("시험 유형을 입력하세요: ");
	scanf("%d", &exam);
	printf("시험%d의 최저점수: %d\n", exam, find_min(score, exam));
	printf("시험%d의 최고점수: %d\n", exam, find_max(score, exam));
	printf("시험%d의 평균: %.2f\n", exam, comp_avg(score, exam));

}