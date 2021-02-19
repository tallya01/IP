#include <stdio.h>

int main() {
    int r, c, i, j, k, aux, maior;

    scanf("%d %d", &r, &c);

    if(r<=0 || r>10 || c<=0 || c>10){
        printf("dimensao invalida\n");
        return 0;
    }

    int m[r][c], u[r*c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &m[i][j]);
        }
    }

    maior = m[0][0];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(m[i][j]>maior) maior=m[i][j];
        }
    }

    int v[maior+1];

    for(i=0;i<maior+1;i++){
        v[i]=0;
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            v[m[i][j]]++;
        }
    }

    aux=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(v[m[i][j]]==1) aux=1;
        }
    }

    if(aux==0){
        printf("sem elementos unicos\n");
        return 0;
    }
    
    for(i=0, k=0;i<r;i++){
        for(j=0;j<c;j++){
            if(v[m[i][j]]==1){
                u[k] = m[i][j];
                k++;
            } 
        }
    }
    

    for(i=0;i<k;i++){
        printf("%d", u[i]);
        if(i!=k-1) printf(",");
    }
    printf("\n");

    return 0;
}