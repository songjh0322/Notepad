#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

//������������ ���� ���ϴ� ���α׷�

int main() {
	double a; //������������ ��� a,b,c
	double b;
	double c;
	double discriminant; //�Ǻ���
	double root; //��
	double root2; //�߱��� �����ϰ� ���� 2���� ��츦 ���� ����
	printf("��� a, ��� b, ��� c�� ���ʴ�� �Է��Ͻÿ�: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0) {
		root = -c / b; 
		printf("�������� ���� %lf�Դϴ�.\n", root);
	}
	else {
		discriminant = b * b - 4 * a * c;
		if (discriminant < 0) { //���
			printf("�Ǳ��� �������� �ʽ��ϴ�.\n");
		}
		else if (discriminant == 0) { //�߱�
			root = -b / (2 * a);
			printf("�������� ���� %lf�Դϴ�.\n", root);
		}
		else { //���� �ٸ� �� �Ǳ�
			root = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
			printf("�������� ���� %lf�Դϴ�.\n", root);
			printf("�������� ���� %lf�Դϴ�.\n", root2);
		}
	}
}