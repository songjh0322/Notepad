#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int fahrenheit;
	double celsius;
	printf("화씨온도를 입력하시오: ");
	scanf("%d", &fahrenheit);
	celsius = (double)5 / 9 * (fahrenheit - 32);
	printf("섭씨온도는 %f입니다.\n", celsius);
}