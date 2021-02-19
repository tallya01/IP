#include <stdio.h>

int main() {
    float sal_min, qtd_kw, custo_kw, custo_cons, custo_desc;

    scanf("%f", &sal_min);
    scanf("%f", &qtd_kw);

    custo_kw = sal_min * 0.7 / 100;
    custo_cons = qtd_kw * custo_kw;
    custo_desc = custo_cons * 0.9;

    printf("Custo por kW: R$ %.2f\n", custo_kw);
    printf("Custo do consumo: R$ %.2f\n", custo_cons);
    printf("Custo com desconto: R$ %.2f\n", custo_desc);

    return 0;
}