#include <stdio.h>

int main() {
    double sal_min, li, ptv1, ptv2, salbr, salliq, com1, com2;
    int qtv1, qtv2;
    unsigned long int mat = 1;

    scanf("%lf %lf %lf %lf", &sal_min, &li, &ptv1, &ptv2);

    while(1){
        scanf("%lu %d %d", &mat, &qtv1, &qtv2);
        if(mat==0) break;

        //cálculo das comissões
        if(qtv1 >= 10) com1 = ptv1 * 0.14 * qtv1;
        else com1 = ptv1 * 0.13 * qtv1;
        if(qtv2 >= 20) com2 = ptv2 * 0.13 * qtv2;
        else com2 = ptv2 * 0.12 * qtv2;

        salbr = sal_min + com1 + com2;

        salliq = salbr * 0.92;

        if(salliq > li) salliq = salliq - ((salliq - li)*0.15);

        printf("MATRICULA = %lu, SALARIO BRUTO = %.2lf, SALARIO LIQUIDO = %.2lf\n", mat, salbr, salliq);
    }

    return 0;
}