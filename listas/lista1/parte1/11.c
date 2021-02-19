#include <stdio.h>

int main() {
    float preco, perc_dist, perc_imp, valor_final;

    scanf("%f", &preco);
    scanf("%f", &perc_dist);
    scanf("%f", &perc_imp);

    valor_final = preco + (preco * perc_dist / 100) + (preco * perc_imp /100);

    printf("O VALOR DO CARRO E = %.2f\n", valor_final);

    return 0;
}