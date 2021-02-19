#include <stdio.h>

int main() {
    int Tur[6][6] = {{0,63,210,190,-1,190},{63,0,160,150,95,10},{210,160,0,10,1,10},{190,150,10,0,10,20},{10,95,7,21,0,80},{190,2,-1,41,80,0}};
    int n, i, somaDist=0, aux=0;

    scanf("%d", &n);

    int v[n];

    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }

    for(i=0;i<n-1;i++){
        somaDist += Tur[v[i]][v[i+1]];
        if(Tur[v[i]][v[i+1]]==-1) aux=1;
    }

    if(aux==0) printf("%d\n", somaDist);
    else printf("rota invalida!\n");

    return 0;
}