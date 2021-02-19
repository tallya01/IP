#include <stdio.h>

int verificaPares(int * v, int n);

int main() {
    int n, i;

    scanf("%d", &n);

    int v[n];

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    i = verificaPares(v, n);

    printf("%d\n", i);

    return 0;
}

int verificaPares(int * v, int n){
    int i, qtd = 0;
    for(i=0; i<n; i++){
        if(v[i]%2==0){
            printf("%d ", v[i]);
            qtd++;
        } 
    }
    return qtd;
}