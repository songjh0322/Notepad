#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int scores[100];
	int count = 0;
	int sum = 0;
	double avg = 0;
	for (int i = 0; i < 100; i++) {
		printf("학생%d의 성적을 입력하세요: ", i + 1);
		scanf("%d", &scores[i]);
		if (scores[i] < 0) {
			break;
		}
		count++;
		sum = sum + scores[i];
	}
	avg = (double)sum / count;
	printf("학생%d명의 성적의 평균은 %.3lf입니다.\n", count, avg);


}