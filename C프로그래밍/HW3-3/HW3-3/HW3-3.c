#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//�簢���� ���̿� �ѷ��� ���ϴ� ���α׷�

int main(void) {
	double width;
	double height;
	double area;
	double circumference;

	printf("�Ʒ� ������ �Է����ּ���.\n");
	printf("�簢���� ���� : ");
	scanf("%lf", &width);
	printf("�簢���� ���� : ");
	scanf("%lf", &height);
	area = width * height;
	circumference = (width + height) * 2;
	printf("���̴� %f �Դϴ�.\n", area);
	printf("�ѷ��� %f �Դϴ�.\n", circumference);
}