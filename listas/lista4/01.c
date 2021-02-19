#include <stdio.h>

int main() {
    double A[2][2];
    double det;

    scanf("%lf%lf%lf%lf", &A[0][0], &A[0][1], &A[1][0], &A[1][1]);

    det = (A[0][0]*A[1][1])-(A[0][1]*A[1][0]);

    printf("%.2lf\n", det);

    return 0;
}