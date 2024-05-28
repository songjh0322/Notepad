#include <stdio.h>

int main() {

    int i, j;
    double avg;

    int* pi, * pj;
    double* pavg;

    pi = &i;
    pj = &j;
    pavg = &avg;

    *pi = 5;
    *pj = 10;

    *pavg = (*pi + *pj) / 2.0;

    printf("*pi = %d, *pj = %d, *pavg = %.2f\n", *pi, *pj, *pavg);
    printf("i = %d, j = %d, avg = %.2f\n", i, j, avg);

    return 0;
}