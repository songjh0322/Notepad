#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	int s0 = 0;
	int s1 = 0;
	int s2 = 0;
	int s3 = 0;
	int s4 = 0;
	int seatNum; //���� �� ���� ��Ҹ� �ϱ� ���� ����
	while (1) {
		printf("1---�¼�Ȯ���ϱ�\n");
		printf("2---�����ϱ�\n");
		printf("3---��������ϱ�\n");
		printf("4---�����ϱ�\n");
		int n;
		printf("�޴��� �����ϼ���: ");
		scanf("%d", &n);

		switch (n) {
		case 1:
			printf("\n");
			printf("0 1 2 3 4\n");
			printf("----------\n");
			printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			break;

		case 2:
			printf("������ ���ϴ� �ڸ���? ");
			scanf("%d", &seatNum);
			printf("%d�� �Է��ϼ̽��ϴ�.\n", seatNum);
			if (seatNum == 0 && s0 == 0) {
				printf("������ �Ϸ�Ǿ����ϴ�.\n\n");
				s0 = 1;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 1 && s1 == 0) {
				printf("������ �Ϸ�Ǿ����ϴ�.\n\n");
				s1 = 1;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 2 && s2 == 0) {
				printf("������ �Ϸ�Ǿ����ϴ�.\n\n");
				s2 = 1;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 3 && s3 == 0) {
				printf("������ �Ϸ�Ǿ����ϴ�.\n\n");
				s3 = 1;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 4 && s4 == 0) {
				printf("������ �Ϸ�Ǿ����ϴ�.\n\n");
				s4 = 1;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else {
				printf("�̹� ����� �ڸ��Դϴ�.\n\n");
			}
			break;
		case 3:
			printf("������Ҹ� ���ϴ� �ڸ���? ");
			scanf("%d", &seatNum);
			if (seatNum == 0 && s0 == 1) {
				printf("������Ұ� �Ϸ�Ǿ����ϴ�.\n\n");
				s0 = 0;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 1 && s1 == 1) {
				printf("������Ұ� �Ϸ�Ǿ����ϴ�.\n\n");
				s1 = 0;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 2 && s2 == 1) {
				printf("������Ұ� �Ϸ�Ǿ����ϴ�.\n\n");
				s2 = 0;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 3 && s3 == 1) {
				printf("������Ұ� �Ϸ�Ǿ����ϴ�.\n\n");
				s3 = 0;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 4 && s4 == 1) {
				printf("������Ұ� �Ϸ�Ǿ����ϴ�.\n\n");
				s4 = 0;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else {
				printf("������� ���� �ڸ��Դϴ�.\n\n");
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			break;
		case 4:
			printf("�̿��� �ּż� �����մϴ�.\n");
			return 0;
		}
		
	}
}