#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	int n;
	int i = 1;
	int evenSum = 0;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	while (i <= n) {
		if (i % 2 == 0) {
			evenSum += i;
		}
		i++;
	}
	printf("1���� %d������ ¦������ %d�Դϴ�.", n, evenSum);
}