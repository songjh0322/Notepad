#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
/*
* 윤년의 조건
* 1. 해가 4의 배수이면서 100의 배수가 아니면 윤년
* 2. 400의 배수이면 윤년
*/
int main() {
	int year;
	printf("연도를 입력하시오: ");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("%d년은 윤년입니다.\n", year);
		printf("즉, 1년은 366일입니다.");
	}
	else {
		printf("%d년은 윤년이 아닙니다.\n", year);
		printf("즉, 1년은 365일입니다.");
	}

}