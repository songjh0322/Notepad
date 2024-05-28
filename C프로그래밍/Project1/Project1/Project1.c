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
		printf("예약이 완료되었습니다.\n");
		print_seats(s_array);
		return 1;
	}
	else {
		printf("이미 예약된 자리입니다.\n");
		return -1;
	}
}



int cancel(int s_array[3][5], int row, int col) {
	if (s_array[row][col] == 1) {
		s_array[row][col] = 0;
		printf("예약취소가 완료되었습니다.\n");
		print_seats(s_array);
		return 1;
	}
	else {
		printf("예약되지 않은 자리입니다.\n");
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
		printf("1---좌석확인하기\n");
		printf("2---예약하기\n");
		printf("3---예약취소하기\n");
		printf("4---종료하기\n");
		int n;
		printf("메뉴를 선택하세요: ");
		scanf("%d", &n);

		switch (n) {
		case 1:
			print_seats(s); //좌석 확인 함수 호출
			break;

		case 2:
			printf("예약을 원하는 자리는(행 열)? ");
			scanf("%d %d", &row, &col);
			reserve(s, row, col);
			break;
		case 3:
			printf("예약취소를 원하는 자리는?(행 열)? ");
			scanf("%d %d", &row, &col);
			cancel(s, row, col);
			break;
		case 4:
			printf("이용해 주셔서 감사합니다.\n");
			return 0;
		}

	}
}