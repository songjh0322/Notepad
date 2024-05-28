#include <stdio.h>
#define SIZE 5
#define MAX_SCORE 4.5 

void calculate(double* e, double* m, double* e100, double* m100, double* avg100, int size) {
    for (int i = 0; i < size; i++) {
        *(e100 + i) = (*(e + i) / MAX_SCORE) * 100;
        *(m100 + i) = (*(m + i) / MAX_SCORE) * 100;
        *(avg100 + i) = (*(e100 + i) + *(m100 + i)) / 2;
    }
}

int main(void) {
    double eng[SIZE] = { 4.1, 3.0, 2.8, 4.2, 3.5 };
    double math[SIZE] = { 3.1, 3.5, 3.3, 3.2, 2.7 };
    double eng100[SIZE];
    double math100[SIZE];
    double avg100[SIZE];

    calculate(eng, math, eng100, math100, avg100, SIZE);

    printf("영어 성적 백분율: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", eng100[i]);
    }
    printf("\n");

    printf("수학 성적 백분율: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", math100[i]);
    }
    printf("\n");

    printf("영어와 수학의 평균백분율: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", avg100[i]);
    }
    printf("\n");

    return 0;
}