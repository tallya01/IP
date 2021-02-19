#include <stdio.h>

void converteEmNotasMoedas(int n);

int main(){
    int n;

    scanf("%d", &n);

    converteEmNotasMoedas(n);

    return 0;
}

void converteEmNotasMoedas(int n){
    int n100, n50, n10, n1;

    n100 = n/100;
    n50 = n%100/50;
    n10 = n%100%50/10;
    n1 = n%10;

    printf("NOTAS DE 100 = %d\n", n100);
    printf("NOTAS DE 50 = %d\n", n50);
    printf("NOTAS DE 10 = %d\n", n10);
    printf("MOEDAS DE 1 = %d\n", n1);
}