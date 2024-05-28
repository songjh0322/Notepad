#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	int n;
	int i = 1;
	int evenSum = 0;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	while (i <= n) {
		if (i % 2 == 0) {
			evenSum += i;
		}
		i++;
	}
	printf("1부터 %d까지의 짝수합은 %d입니다.", n, evenSum);
}