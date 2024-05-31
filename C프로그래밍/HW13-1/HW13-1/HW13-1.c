#include <stdio.h>
#include <math.h>

struct rectangle {
	int width;
	int height;
};


struct point {
	int x;
	int y;
};

int main(void) {

	struct point p1, p2;
	struct rectangle dist;
	int area, circum;
	printf("왼쪽 하단의 좌표를 입력하세요: ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("오른쪽 상단의 좌표를 입력하세요: ");
	scanf("%d %d", &p2.x, &p2.y);
	dist.width = p2.x - p1.x;
	dist.height = p2.y - p1.y;
	area = dist.width * dist.height;
	circum = dist.width * 2 + dist.height * 2;

	printf("면적은 %d이고 둘레는 %d입니다.\n", area, circum);


	return 0;
}