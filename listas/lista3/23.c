#include <stdio.h>

int base1(int * v);
int base2(int * v);

int main() {
    int n, i, j, k, cpf[11];

    scanf("%d", &n);

    for(i=0;i<n;i++){
        for(j=0;j<11;j++){
            scanf("%d", &cpf[j]);
        }
        if(base1(cpf)%11%10 == cpf[9] &&base2(cpf)%11%10 == cpf[10]) printf("CPF valido\n");
        else printf("CPF invalido\n");
    }

    return 0;
}

int base1(int * v){
    int i, base = 0;
    for(i=0;i<9;i++){
        base += v[i] * (i+1);
    }
    return base;
}
int base2(int * v){
    int i, j, base = 0;
    for(i=0, j=9; i<9; i++, j--){
        base += v[i] * j;
    }
    return base;
}