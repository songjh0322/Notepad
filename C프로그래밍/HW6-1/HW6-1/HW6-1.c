#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
/*
* ������ ����
* 1. �ذ� 4�� ����̸鼭 100�� ����� �ƴϸ� ����
* 2. 400�� ����̸� ����
*/
int main() {
	int year;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("%d���� �����Դϴ�.\n", year);
		printf("��, 1���� 366���Դϴ�.");
	}
	else {
		printf("%d���� ������ �ƴմϴ�.\n", year);
		printf("��, 1���� 365���Դϴ�.");
	}

}