#include <stdio.h>

int main() {
    int tempo;
    float valor;

    scanf("%d", &tempo);

    if(tempo % 3 != 0)
        valor = (tempo / 3) * 10 + (tempo % 3) * 5;
    else 
        valor = tempo / 3 * 10;

    printf("O VALOR A PAGAR E = %.2f\n", valor);

    return 0;
}