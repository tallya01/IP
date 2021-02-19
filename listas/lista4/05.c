#include <stdio.h>

int main() {
    int r, c, i, j;

    scanf("%d %d", &r, &c);

    int X[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i%2==0){
                if(j%2==0) X[i][j] = 1;
                else X[i][j] = 0;
            }
            else{
                if(j%2==0) X[i][j] = 0;
                else X[i][j] = 1;
            }
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d", X[i][j]);
        }
        printf("\n");
    }

    return 0;
}