#include <stdio.h>

int main() {
    float temp_f, temp_c, qtd_pol, qtd_mm;
    
    scanf("%f", &temp_f);
    scanf("%f", &qtd_pol);

    temp_c = (5*(temp_f - 32)) / 9;
    qtd_mm = qtd_pol * 25.4;

    printf("O VALOR EM CELSIUS = %.2f\n", temp_c);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", qtd_mm);

    return 0;
}