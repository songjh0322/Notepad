#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//환율 계산 프로그램

int main(void) {
	int won;
	double dollar;
	double exchange_rate;
	printf("환율을 입력하시오 : ");
	scanf("%lf", &exchange_rate); //double 형은 lf를 사용한다.
	printf("원화 금액을 입력하시오 : ");
	scanf("%d", &won);
	dollar = won / exchange_rate;
	printf("원화 %d원은 %f달러입니다.\n", won, dollar);

	return 0;

}