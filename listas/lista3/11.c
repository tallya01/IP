#include <stdio.h>

int main() {
    int n, i, maior=0, rep=0, idMaior;

    scanf("%d", &n);

    int v[n];

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
        if(v[i]>maior) maior = v[i];
    }
    for(i=0; i<n; i++){
        if(v[i]==v[n-1]) rep++;
    }
    for(i=0; i<n; i++){
        if(v[i]==maior){
            idMaior = i;
            break;
        } 
    }

    printf("Nota %d, %d vezes\n", v[n-1], rep);
    printf("Nota %d, indice %d\n", maior, idMaior);

    return 0;
}