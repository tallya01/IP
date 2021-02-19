#include <stdio.h>

int main() {
    int num, alg1, alg2, alg3, alg4;

    scanf("%d", &num);

    alg1 = num / 1000;
    alg2 = (num / 100) - (alg1 * 10);
    alg3 = (num / 10) - (alg1 * 100) - (alg2 * 10);
    alg4 = num - (alg1 * 1000) - (alg2 * 100) - (alg3 * 10);

    if(alg1 < 0 || alg1 > 9) printf("Numero invalido!\n");
    else{
    if(alg1){
        if(alg1 == 1) printf("(quarta ordem) %d = %d unidade de milhar", num, alg1);
        else printf("(quarta ordem) %d = %d unidades de milhar", num, alg1);
        
        if(alg2){
            printf(" + ");
            if(alg2 == 1) printf("%d centena", alg2);
            else printf("%d centenas", alg2);
        }
        if(alg3){
            printf(" + ");
            if(alg3 == 1) printf("%d dezena", alg3);
            else printf("%d dezenas", alg3);
        }
        if(alg4){
            printf(" + ");
            if(alg4 == 1) printf("%d unidade", alg4);
            else printf("%d unidades", alg4);
        }
    }
    else if (alg2){
        if(alg2 == 1) printf("(terceira ordem) %d = %d centena", num, alg3);
        else printf("(terceira ordem) %d = %d centenas", num, alg2);
        
        if(alg3){
            printf(" + ");
            if(alg3 == 1) printf("%d dezena", alg3);
            else printf("%d dezenas", alg3);
        }
        if(alg4){
            printf(" + ");
            if(alg4 == 1) printf("%d unidade", alg4);
            else printf("%d unidades", alg4);
        }
    }
    else if (alg3){
        if(alg3 == 1) printf("(segunda ordem) %d = %d dezena", num, alg3);
        else printf("(segunda ordem) %d = %d dezenas", num, alg3);
        
        if(alg4){
            printf(" + ");
            if(alg4 == 1) printf("%d unidade", alg4);
            else printf("%d unidades", alg4);
        }
    }
    else if (alg4 != 0){
        if(alg4 == 1) printf("(primeira ordem) %d = %d unidade", num, alg4);
        else printf("(primeira ordem) %d = %d unidades", num, alg4);
    }
    printf(" = ");
    
    if(alg1) printf("%d", (alg1 * 1000));
    if(alg1 && alg2) printf(" + ");
    if(alg2) printf("%d", (alg2 * 100));
    if(alg2 && alg3 || alg1 && alg3) printf(" + ");
    if(alg3) printf("%d", (alg3 * 10));
    if(alg3 && alg4 || alg2 && alg4 || alg1 && alg4) printf(" + ");
    if(alg4) printf("%d", alg4);
    
    printf("\n");
    }

    return 0;

}

// não tá pronto!!!