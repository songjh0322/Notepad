#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

struct rectangle {
	struct point bottom_left;
	struct point top_right;
};

double calculate_area(struct rectangle rect) {
	int width = rect.top_right.x - rect.bottom_left.x;
	int height = rect.top_right.y - rect.bottom_left.y;
	return (double)(width * height);
}

double calculate_perimeter(struct rectangle rect) {
	int width = rect.top_right.x - rect.bottom_left.x;
	int height = rect.top_right.y - rect.bottom_left.y;
	return 2.0 * (width + height);
}

int main(void) {
	struct point p1, p2;
	struct rectangle rect;

	printf("���� �ϴ� �������� ��ǥ�� �Է��Ͻÿ�(x y): ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("������ ��� �������� ��ǥ�� �Է��Ͻÿ�(x y): ");
	scanf("%d %d", &p2.x, &p2.y);

	rect.bottom_left = p1;
	rect.top_right = p2;

	int area = calculate_area(rect);
	int perimeter = calculate_perimeter(rect);

	printf("������ %d�̰� �ѷ��� %d�Դϴ�.\n", area, perimeter);

	return 0;
}