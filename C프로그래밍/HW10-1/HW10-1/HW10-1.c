#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int scores[100];
	int count = 0;
	int sum = 0;
	double avg = 0;
	for (int i = 0; i < 100; i++) {
		printf("�л�%d�� ������ �Է��ϼ���: ", i + 1);
		scanf("%d", &scores[i]);
		if (scores[i] < 0) {
			break;
		}
		count++;
		sum = sum + scores[i];
	}
	avg = (double)sum / count;
	printf("�л�%d���� ������ ����� %.3lf�Դϴ�.\n", count, avg);


}