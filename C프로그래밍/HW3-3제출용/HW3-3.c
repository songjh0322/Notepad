#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//사각형의 넓이와 둘레를 구하는 프로그램

int main(void) {
	double width;
	double height;
	double area;
	double circumference;

	printf("아래 값들을 입력해주세요.\n");
	printf("사각형의 길이 : ");
	scanf("%lf", &width);
	printf("사각형의 높이 : ");
	scanf("%lf", &height);
	area = width * height;
	circumference = (width + height) * 2;
	printf("넓이는 %f 입니다.\n", area);
	printf("둘레는 %f 입니다.\n", circumference);
}