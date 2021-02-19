#include <stdio.h>
#include <stdlib.h>

struct Fracoes {
    double * num;
    double * den;
} frac;

int main() {
    int t, quant, i, j, k, eq;

    scanf("%d", &t);

    for(i=0;i<t;i++){
        scanf("%d", &quant);

        frac.num = (double *) calloc(quant, sizeof(double));
        frac.den = (double *) calloc(quant, sizeof(double));

        for(j=0;j<quant;j++){
            scanf("%lf/%lf", &frac.num[j], &frac.den[j]);
        }

        printf("Caso de teste %d\n", i+1);

        eq=0;

        for(j=0;j<quant;j++){
            for(k=0;k<quant;k++){
                if(j<k && ((frac.num[k]/frac.num[j])==(frac.den[k]/frac.den[j]))){
                    printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", frac.num[j], frac.den[j], frac.num[k], frac.den[k]);
                    eq++;
                }
            }
        }

        if(eq==0) printf("Nao ha fracoes equivalentes na sequencia\n");

        free(frac.num);
        free(frac.den);
    }

    return 0;
}