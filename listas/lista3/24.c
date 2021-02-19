#include <stdio.h>

int main() {
    int n, i, j, aux;

    scanf("%d", &n);

    int v[n];

    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }

    for(i=0;i<n;i++){
        aux = 0;
        for(j=0;j<i;j++){
            if(v[i]==v[j] && i != j) aux=1;
        }
        if(aux==0) printf("%d\n", v[i]);
    }

    return 0;
}