#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int get_integer() {

	int x;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &x);

	return x;
}
int factorial(int n) {

	if (n == 0) {
		return 1;
	}
	return n * factorial(n - 1);
}

int combination(int n, int r) {
	
	return factorial(n) / (factorial(n - r) * factorial(r));
}
int main() {
	int n = get_integer();
	int r = get_integer();
	int Combi = combination(n, r);
	printf("C(%d,%d)�� %d�Դϴ�.", n, r, Combi);
}