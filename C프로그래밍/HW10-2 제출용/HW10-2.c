#include <stdio.h>

#define NUM_EXAM 3
#define NUM_STUDENT 5

int find_min(int score[NUM_EXAM][NUM_STUDENT], int exam) {
    int min = score[exam][0];
    for (int i = 1; i < NUM_STUDENT; i++) {
        if (score[exam][i] < min) {
            min = score[exam][i];
        }
    }
    return min;
}

int find_max(int score[NUM_EXAM][NUM_STUDENT], int exam) {
    int max = score[exam][0];
    for (int i = 1; i < NUM_STUDENT; i++) {
        if (score[exam][i] > max) {
            max = score[exam][i];
        }
    }
    return max;
}

double comp_avg(int score[NUM_EXAM][NUM_STUDENT], int exam) {
    double sum = 0;
    for (int i = 0; i < NUM_STUDENT; i++) {
        sum += score[exam][i];
    }
    return sum / NUM_STUDENT;
}

int main() {
    int scores[NUM_EXAM][NUM_STUDENT] = {
        {60, 80, 43, 78, 93},
        {75, 59, 81, 77, 81},
        {83, 74, 97, 73, 81}
    };

    for (int exam_num = 0; exam_num < NUM_EXAM; exam_num++) {
        printf("시험%d의 최저점수: %d\n", exam_num, find_min(scores, exam_num));
        printf("시험%d의 최고점수: %d\n", exam_num, find_max(scores, exam_num));
        printf("시험%d의 평균: %.2f\n", exam_num, comp_avg(scores, exam_num));
        printf("\n"); 
    }
    return 0;
}