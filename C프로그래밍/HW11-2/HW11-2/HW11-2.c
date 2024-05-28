#include <stdio.h>
#define SIZE 5
#define MAX_PIXEL_VALUE 255

void change_img(int img[][SIZE], int rows, int cols) { // 두 번째 차원의 크기는 명시해야 함.
	int i,j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			img[i][j] = img[i][j] + 10;
			if (img[i][j] >= MAX_PIXEL_VALUE) {
				img[i][j] = MAX_PIXEL_VALUE;
			}
		}
	}
}
int main(void) {
	int img[SIZE][SIZE] = {
		{10, 120, 130, 240, 250},
		{10, 120, 130, 240, 250},
		{10, 120, 130, 240, 250},
		{10, 120, 130, 240, 250},
		{10, 120, 130, 240, 250}
	};
	int i, j;
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			printf("%d ", img[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	change_img(img, SIZE, SIZE);
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			printf("%d ", img[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
