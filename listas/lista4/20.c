#include <stdio.h>

int main() {
    int r, c, i, j, menor, maior;

    scanf("%d %d", &r, &c);

    int M[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &M[i][j]);
        }
    }

    maior = menor = M[0][0];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(M[i][j]<menor) menor = M[i][j];
            if(M[i][j]>maior) maior = M[i][j];
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(M[i][j] == menor) M[i][j] = maior;
            else if(M[i][j] == maior) M[i][j] = menor;
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d", M[i][j]);
            if(j!=c-1) printf(" ");
        }
        printf("\n");
    }


    return 0;
}