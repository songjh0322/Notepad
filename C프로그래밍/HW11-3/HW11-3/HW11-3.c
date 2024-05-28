#include <stdio.h>
#define SIZE 5
#define MAX_SCORE 4.5 
void calculate(double* e, double* m, double* e100, double* m100, double* avg100, int size);

int main(void) {
	int i;
	double eng[SIZE] = { 4.1, 3.0, 2.8, 4.2, 3.5 };
	double math[SIZE] = { 3.1, 3.5, 3.3, 3.2, 2.7 };
	double eng100[SIZE];
	double math100[SIZE];
	double avg100[SIZE];

	calculate(eng, math, eng100, math100, avg100, SIZE);
	for (i = 0; i < SIZE; i++) {
		printf("학생%d의 영어 성적 백분율: %.2f\n", i + 1, eng100[i]);
	}
	printf("\n");
	for (i = 0; i < SIZE; i++) {
		printf("학생%d의 수학 성적 백분율: %.2f\n", i + 1, math100[i]);
	}
	printf("\n");
	for (i = 0; i < SIZE; i++) {
		printf("학생%d의 평균 백분율: %.2f\n", i + 1, avg100[i]);
	}
	printf("\n");

}

void calculate(double* e, double* m, double* e100, double* m100, double* avg100, int size) {
	int i;
	for (i = 0; i < SIZE; i++) {
		*(e100 + i) = (*(e + i) / MAX_SCORE) * 100;
		*(m100 + i) = (*(m + i) / MAX_SCORE) * 100;
		*(avg100 + i) = (*(e100 + i) + *(m100 + i)) / 2;
	}
}