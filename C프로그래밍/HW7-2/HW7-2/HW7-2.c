#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int x, y;
	int r = 0;
	printf("�� ���� ������ �Է��Ͻÿ�(ū��, ������): ");
	scanf("%d %d", &x, &y);
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d�Դϴ�.", x);

}