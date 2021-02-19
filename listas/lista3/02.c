#include <stdio.h>

int contaMaiores(int * v, int n, int k);

int main() {
    int n=0, k, i;

    while(n<1 || n>1000){
        scanf("%d", &n);
    }

    int v[n];

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    scanf("%d", &k);

    i = contaMaiores(v, n, k);

    printf("%d\n", i);

    return 0;
}

int contaMaiores(int * v, int n, int k){
    int i, qtd = 0;
    for(i=0; i<n; i++){
        if(v[i]>=k) qtd++;
    }
    return qtd;
}