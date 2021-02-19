#include <stdio.h>

int main() {
    int conta;
    char tipo;
    float consumo, valor;

    scanf("%d %f %c", &conta, &consumo, &tipo);

    switch(tipo){
        case 'C': {
            if(consumo <= 80.0)
                valor = 500.00;
            else
                valor = 500 + (0.25 * (consumo - 80));
            break;
        }
        case 'I': {
            if(consumo <= 100.0)
                valor = 800.00;
            else
                valor = 800 + (0.04 * (consumo - 100));
            break;
        }
        case 'R': valor = 5 + (consumo * 0.05);
            break;
    }

    printf("CONTA = %d\n", conta);
    printf("VALOR DA CONTA = %.2f\n", valor);

    return 0;
}