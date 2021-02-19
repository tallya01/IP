#include <stdio.h>

int main() {
    int n, i, j, qtdIguais, unicos = 0;

    scanf("%d", &n);

    int v[n];

    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }

    for(i=0;i<n;i++){
        qtdIguais = 0;
        for(j=0;j<n;j++){
            if(v[i]==v[j] && i != j) qtdIguais++;
        }
        if(qtdIguais==0) unicos++;
    }

    printf("%d\n", unicos);

    return 0;
}