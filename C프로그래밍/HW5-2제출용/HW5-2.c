#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int fahrenheit;
	double celsius;
	printf("ȭ���µ��� �Է��Ͻÿ�: ");
	scanf("%d", &fahrenheit);
	celsius = (double)5 / 9 * (fahrenheit - 32);
	printf("�����µ��� %f�Դϴ�.\n", celsius);
}