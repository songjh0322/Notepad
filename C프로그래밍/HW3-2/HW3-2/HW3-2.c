#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//ȯ�� ��� ���α׷�

int main(void) {
	int won;
	double dollar;
	double exchange_rate;
	printf("ȯ���� �Է��Ͻÿ� : ");
	scanf("%lf", &exchange_rate); //double ���� lf�� ����Ѵ�.
	printf("��ȭ �ݾ��� �Է��Ͻÿ� : ");
	scanf("%d", &won);
	dollar = won / exchange_rate;
	printf("��ȭ %d���� %f�޷��Դϴ�.\n", won, dollar);

	return 0;

}