#include <stdio.h>

void sub(int b[]) {
	b[0] = 4;
	
}
int main(void)
{
	int a[3] = { 1,2,3 };
	sub(a);
	for (int i = 0; i < 3; i++) {
		printf("%d ", a[i]);
	}
}

