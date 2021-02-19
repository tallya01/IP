#include <stdio.h>

int verificaVetor(int * v, int x, int n);

int main(){
    int n, m, i, x, y;

    scanf("%d", &n);

    int v[n];

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    scanf("%d", &m);

    for(i=0; i<m; i++){
        scanf("%d", &x);
        y = verificaVetor(v, x, n);
        if(y==1) printf("ACHEI\n");
        else printf("NAO ACHEI\n");
    }

    return 0;
}

int verificaVetor(int * v, int x, int n){
    int i;
    for(i=0; i<n; i++){
        if(x==v[i]) return 1;
    }
    return 0;
}