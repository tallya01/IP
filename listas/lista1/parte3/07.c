#include <stdio.h>

int main() {
    long int mat;
    int pres, cont;
    double np, nl, nt, nf, d;

    while (1){
       scanf("%ld", &mat);
       if(mat == -1) break;

       np = 0; 
       for(cont=1; cont<=8; cont++){
           scanf("%lf", &d);
           if(d == -1) break;
           np += d;
       }

       nl = 0;
       for(cont=1;cont<=5;cont++){
           scanf("%lf", &d);
           if(d == -1) break;
           nl += d;
       }

       scanf("%lf", &nt);
       if(nt == -1) break;
       scanf("%d", &pres);
       if(pres == -1) break;

       nf = 0.7*(np/8) + 0.15*(nl/5) + 0.15*nt;

       printf("Matricula: %ld, Nota Final: %.2lf, Situacao Final: ", mat, nf);
       if(nf>=6.0 && pres>=96) printf("APROVADO\n");
       else if(nf>=6.0 && pres<96) printf("REPROVADO POR FREQUENCIA\n");
       else if(nf<6.0 && pres>=96) printf("REPROVADO POR NOTA\n");
       else printf("REPROVADO POR NOTA E POR FREQUENCIA\n");

    }
    
    return 0;

}