#include <stdio.h>

int main() {
    int n, i, j, menor, aux;

    scanf("%d", &n);

    int v[n], p[n];

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    for(i=0;i<n;i++){
        aux=0;
        for(j=0;j<n;j++){
            if(v[i]<v[j]) aux++;
            if(v[i]==v[j] && i<j) aux++;
        }
        p[aux] = v[i];
    }

    for(i=n-1;i>=0;i--){
        printf("%d\n", p[i]);
    }

    return 0;
}