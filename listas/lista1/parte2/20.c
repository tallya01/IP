#include <stdio.h>

#define SAL_MIN 937

int main() {
    float renda, renda_pc, renda_min;
    int pessoas, escola, etnia;

    scanf("%f %d %d %d", &renda, &pessoas, &escola, &etnia);

    renda_pc = renda / pessoas;
    renda_min = SAL_MIN * 1.5;

    if(escola == 1) printf("ALUNO NAO COTISTA\n");
    else{
        printf("ALUNO COTISTA ");
        if(renda_pc<=renda_min){
            if(etnia == 4) printf("(L1)\n");
            else printf("(L2)\n");
        }
        else{
            if(etnia == 4) printf("(L3)\n");
            else printf("(L4)\n");
        }
    }

    return 0;
}