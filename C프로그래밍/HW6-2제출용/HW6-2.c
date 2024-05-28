#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

//이차방정식의 근을 구하는 프로그램

int main() {
	double a; //이차방정식의 계수 a,b,c
	double b;
	double c;
	double discriminant; //판별식
	double root; //근
	double root2; //중근을 제외하고 근이 2개일 경우를 위한 변수
	printf("계수 a, 계수 b, 계수 c를 차례대로 입력하시오: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0) {
		root = -c / b; 
		printf("방정식의 근은 %lf입니다.\n", root);
	}
	else {
		discriminant = b * b - 4 * a * c;
		if (discriminant < 0) { //허근
			printf("실근이 존재하지 않습니다.\n");
		}
		else if (discriminant == 0) { //중근
			root = -b / (2 * a);
			printf("방정식의 근은 %lf입니다.\n", root);
		}
		else { //서로 다른 두 실근
			root = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
			printf("방정식의 근은 %lf입니다.\n", root);
			printf("방정식의 근은 %lf입니다.\n", root2);
		}
	}
}