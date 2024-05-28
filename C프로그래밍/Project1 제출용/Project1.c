#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	int s0 = 0;
	int s1 = 0;
	int s2 = 0;
	int s3 = 0;
	int s4 = 0;
	int seatNum; //예약 및 예약 취소를 하기 위한 변수
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
			printf("\n");
			printf("0 1 2 3 4\n");
			printf("----------\n");
			printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			break;

		case 2:
			printf("예약을 원하는 자리는? ");
			scanf("%d", &seatNum);
			printf("%d을 입력하셨습니다.\n", seatNum);
			if (seatNum == 0 && s0 == 0) {
				printf("예약이 완료되었습니다.\n\n");
				s0 = 1;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 1 && s1 == 0) {
				printf("예약이 완료되었습니다.\n\n");
				s1 = 1;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 2 && s2 == 0) {
				printf("예약이 완료되었습니다.\n\n");
				s2 = 1;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 3 && s3 == 0) {
				printf("예약이 완료되었습니다.\n\n");
				s3 = 1;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 4 && s4 == 0) {
				printf("예약이 완료되었습니다.\n\n");
				s4 = 1;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else {
				printf("이미 예약된 자리입니다.\n\n");
			}
			break;
		case 3:
			printf("예약취소를 원하는 자리는? ");
			scanf("%d", &seatNum);
			if (seatNum == 0 && s0 == 1) {
				printf("예약취소가 완료되었습니다.\n\n");
				s0 = 0;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 1 && s1 == 1) {
				printf("예약취소가 완료되었습니다.\n\n");
				s1 = 0;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 2 && s2 == 1) {
				printf("예약취소가 완료되었습니다.\n\n");
				s2 = 0;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 3 && s3 == 1) {
				printf("예약취소가 완료되었습니다.\n\n");
				s3 = 0;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else if (seatNum == 4 && s4 == 1) {
				printf("예약취소가 완료되었습니다.\n\n");
				s4 = 0;
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			else {
				printf("예약되지 않은 자리입니다.\n\n");
				printf("0 1 2 3 4\n");
				printf("----------\n");
				printf("%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			}
			break;
		case 4:
			printf("이용해 주셔서 감사합니다.\n");
			return 0;
		}
		
	}
}