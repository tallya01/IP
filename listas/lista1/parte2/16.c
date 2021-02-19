#include <stdio.h>

int main() {
    int mat, n_dep;
    float sal_min, sal_func, taxa, imp_br, imp_liq, imp_total, imp_normal;

    scanf("%d %f %d %f %f", &mat, &sal_min, &n_dep, &sal_func, &taxa);

    if(sal_func > (sal_min*12)) imp_br = sal_func * 0.2;
    else if(sal_func > (sal_min * 5)) imp_br = sal_func * 0.08;
    else imp_br = 0;

    imp_liq = imp_br - (300 * n_dep);

    imp_normal = (sal_func * (taxa / 100));

    imp_total = imp_liq - imp_normal;

    printf("MATRICULA = %d\n", mat);
    printf("IMPOSTO BRUTO = %.2f\n",  imp_br);
    printf("IMPOSTO LIQUIDO = %.2f\n", imp_liq);
    printf("RESULTADO = %.2f\n", imp_total);

    if(imp_total > 0) printf("IMPOSTO A PAGAR\n");
    else if(imp_total == 0) printf("IMPOSTO QUITADO\n");
    else printf("IMPOSTO A RECEBER\n");

    return 0;
}