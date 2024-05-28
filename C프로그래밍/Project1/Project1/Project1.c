#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int print_seats(int s_array[3][5]) {
	printf("  | 0 1 2 3 4\n");
	printf("--------------\n");
	int i, j;
	for (i = 0; i < 3; i++) {
		printf("%d | ", i);
		for (j = 0; j < 5; j++) {

			printf("%d ", s_array[i][j]);
		}
		printf("\n");
	}
	return 1;

}

int reserve(int s_array[3][5], int row, int col) {
	if (s_array[row][col] == 0) {
		s_array[row][col] = 1;
		printf("������ �Ϸ�Ǿ����ϴ�.\n");
		print_seats(s_array);
		return 1;
	}
	else {
		printf("�̹� ����� �ڸ��Դϴ�.\n");
		return -1;
	}
}



int cancel(int s_array[3][5], int row, int col) {
	if (s_array[row][col] == 1) {
		s_array[row][col] = 0;
		printf("������Ұ� �Ϸ�Ǿ����ϴ�.\n");
		print_seats(s_array);
		return 1;
	}
	else {
		printf("������� ���� �ڸ��Դϴ�.\n");
		return -1;
	}
}
int main() {
	int row, col;
	int s[3][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0} };
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
			print_seats(s); //�¼� Ȯ�� �Լ� ȣ��
			break;

		case 2:
			printf("������ ���ϴ� �ڸ���(�� ��)? ");
			scanf("%d %d", &row, &col);
			reserve(s, row, col);
			break;
		case 3:
			printf("������Ҹ� ���ϴ� �ڸ���?(�� ��)? ");
			scanf("%d %d", &row, &col);
			cancel(s, row, col);
			break;
		case 4:
			printf("�̿��� �ּż� �����մϴ�.\n");
			return 0;
		}

	}
}