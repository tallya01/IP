#include <stdio.h>

int main() {
    int i, j;
    float A[2][2], Q[2][2];

    scanf("%f%f%f%f", &A[0][0], &A[0][1], &A[1][0], &A[1][1]);

    Q[0][0] = A[0][0]*A[0][0]+A[0][1]*A[1][0];
    Q[0][1] = A[0][0]*A[0][1]+A[0][1]*A[1][1];
    Q[1][0] = A[1][0]*A[0][0]+A[1][1]*A[1][0];
    Q[1][1] = A[1][0]*A[0][1]+A[1][1]*A[1][1];

    printf("%.3f %.3f\n", Q[0][0], Q[0][1]);
    printf("%.3f %.3f\n", Q[1][0], Q[1][1]);

    return 0;
}