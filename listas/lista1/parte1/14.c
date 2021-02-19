#include <stdio.h>

int main() {
    int num, num_novo, alg1, alg2, alg3, digito;

    scanf("%d", &num);

    alg1 = num / 100;
    alg2 = (num - 100 * alg1) / 10;
    alg3 = num - 100 * alg1 - 10 * alg2;

    digito = (alg1 + alg2 * 3 + alg3 * 5) % 7;

    num_novo = num * 10 + digito;

    printf("O NOVO NUMERO E = %d\n", num_novo);

    return 0;
}