#include <stdio.h>

struct vector {
	double x;
	double y;
};

struct vector get_vector_sum(struct vector a, struct vector b) {
	struct vector result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;

}
int main(void) {
	struct vector v1 = { 2.0,3.0 };
	struct vector v2 = { 1.0,4.0 };
	struct vector vectorSum;
	vectorSum = get_vector_sum(v1, v2);
	printf("벡터의 합은 (%.f, %.f)입니다.\n", vectorSum.x, vectorSum.y);
}