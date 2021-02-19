#include <stdio.h>

int main() {
    int num, num_novo, alg1, alg2, alg3, digito;

    scanf("%d", &num);

    alg1 = num / 100;
    alg2 = (num - 100 * alg1) / 10;
    alg3 = num - 100 * alg1 - 10 * alg2;

    printf("%d%d%d\n", alg3, alg2, alg1);

    return 0;
}