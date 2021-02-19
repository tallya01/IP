#include <stdio.h>

int main() {
    int qtd, pessoas, cont;
    double pop, geral, arq, cad, renda;

    scanf("%d", &qtd);

    for(cont=1; cont<=qtd; cont++){
        scanf("%d %lf %lf %lf %lf", &pessoas, &pop, &geral, &arq, &cad);
        renda = (pop / 100 * pessoas) + (geral / 100 * pessoas * 5) + (arq / 100 * pessoas * 10) + (cad / 100 * pessoas * 20);
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", cont, renda);
    }

    return 0;
}