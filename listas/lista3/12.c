#include <stdio.h>

int main() {
    int n, i, maior=0, menor;

    scanf("%d", &n);

    int v[n];

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
        if(v[i]>maior) maior = v[i];
    }
    menor = maior;
    for(i=0; i<n; i++){
        if(v[i]<menor) menor = v[i];
    }
    for(i=0; i<n; i++){
        printf("%d", v[i]);
        if(i!=n-1) printf(" ");
    }
    printf("\n");
    for(i=n-1; i>=0; i--){
        printf("%d", v[i]);
        if(i!=0) printf(" ");
    }
    printf("\n");
    printf("%d\n%d\n", maior, menor);

    return 0;
}