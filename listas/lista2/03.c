#include <stdio.h>

int separaDigitos(int n);

int main() {
    int n, n_inv;

    scanf("%d", &n);

    n_inv=separaDigitos(n);

    printf("%d\n", n_inv);

    return 0;
}

int separaDigitos(int n){
    int alg1, alg2, alg3, n_inv;

    alg1 = n%10;
    alg2 = (n/10)%10;
    alg3 = n/100;

    n_inv = alg1*100 + alg2*10 + alg3;

    return n_inv; 
}