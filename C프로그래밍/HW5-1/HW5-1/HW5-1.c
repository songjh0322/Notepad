#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {

	int product;
	int price;
	int change;
	printf("���� ���� �Է��Ͻÿ� : ");
	scanf("%d", &product);
	printf("����ڰ� �� ���� �Է��Ͻÿ� : ");
	scanf("%d", &price);
	change = price - product;
	printf("�Ž����� : %d\n", change);
	int change_50000 = 0;
	int change_10000 = 0;
	int change_5000 = 0;
	int change_1000 = 0;
	int change_500 = 0;
	int change_100 = 0;
	int change_50 = 0;
	int change_10 = 0;
	if (change >= 50000) {
		while (1) {
			change -= 50000;
			change_50000++;
			if (change < 50000) {
				break;
			}
		}
	}
	if (change >= 10000) {
		while (1) {
			change -= 10000;
			change_10000++;
			if (change < 10000) {
				break;
			}
		}
	}
	if (change >= 5000) {
		while (1) {
			if (change < 5000) {
				break;
			}
			change -= 5000;
			change_5000++;
			
		}
	}
	if (change >= 1000) {
		while (1) {
			if (change < 1000) {
				break;
			}
			change -= 1000;
			change_1000++;
			
		}
	}
	if (change >= 500) {
		while (1) {
			if (change < 500) {
				break;
			}
			change -= 500;
			change_500++;
			
		}
	}
	if (change >= 100) {
		while (1) {
			if (change < 100) {
				break;
			}
			change -= 100;
			change_100++;
			
		}
	}
	if (change >= 50) {
		while (1) {
			if (change < 50) {
				break;
			}
			change -= 50;
			change_50++;
			
		}
	}
	if (change >= 10) {
		while (1) {
			if (change < 10) {
				break;
			}
			change -= 10;
			change_10++;
			
		}
	}
	printf("�������� : %d��\n", change_50000);
	printf("�ϸ����� : %d��\n", change_10000);
	printf("��õ���� : %d��\n", change_5000);
	printf("õ���� : %d��\n", change_1000);
	printf("����� ���� : %d��\n", change_500);
	printf("��� ���� : %d��\n", change_100);
	printf("���ʿ� ���� : %d��\n", change_50);
	printf("�ʿ� ���� : %d��\n", change_10);


	return 0;
}