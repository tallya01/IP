#include <stdio.h>

int main(){
    int S[9][9];
    int v[10] = {0};
    int i, j, aux=0;

    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            scanf("%d", &S[i][j]);
        }
    }

    //testa horizontalmente
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            v[S[i][j]]++;
        }
        for(j=1;j<10;j++){
            if(v[j]!=i+1) aux=1;
        }
    }

    if(aux==1){
        printf("invalido\n");
        return 0;
    } 

    *v = 0;

    //testa verticalmente
    for(j=0;j<9;j++){
        for(i=0;i<9;i++){
            v[S[i][j]]++;
        }
        for(i=1;i<10;i++){
            if(v[i]!=j+10) aux=1;
        }
    }


    if(aux==1) printf("invalido\n");
    else printf("valido\n");

    return 0;
}