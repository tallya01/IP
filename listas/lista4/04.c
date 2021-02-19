#include <stdio.h>

int main() {
    int r, c, i, j;

    while(1){
        scanf("%d", &r);
        if(r>0 && r<=10) break;
    }
    while(1){
        scanf("%d", &c);
        if(c>0 && c<=10) break;
    }

    int M[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &M[i][j]);
        }
    }

    for(i=0;i<r;i++){
        printf("linha %d: ", i+1);
        for(j=0;j<c;j++){
            printf("%d", M[i][j]);
            if(j!=c-1) printf(",");
        }
        printf("\n");
    }

    return 0;
}