#include <stdio.h>

int main() {

	int a, b, c;
	int	count = 0;
	for (a = 1; a <= 100; a++) {
		for (b = 1; b <= 100; b++) {
			for (c = 1; c <= 100; c++) {
				if (a * a + b * b == c * c) {
					printf("�����ﰢ�� %d %d %d\n", a, b, c);
					count++;
				}
			}
		}
	}
	printf("�� %d���Դϴ�.", count);
}