#include <stdio.h>

int main() {
    int r, c, i, j, esq=0, dir=0, sup=0, inf=0;

    scanf("%d %d", &r, &c);

    int M[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &M[i][j]);
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(M[i][j]==1111){
                if(i==0) sup = M[r-1][j];
                else sup = M[i-1][j];
                if(i==r-1) inf = M[0][j];
                else inf = M[i+1][j];
                if(j==0) esq = M[i][c-1];
                else esq = M[i][j-1];
                if(j==c-1) dir = M[i][0];
                else dir = M[i][j+1];
            }
            if(sup==4 && esq == 0 && inf == 8 && dir == 0){
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("WALLY NAO ESTA NA MATRIZ\n");

    return 0;
}