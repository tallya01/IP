#include <stdio.h>

int main() {
    int r, c, k, x, i, j;

    scanf("%d %d %d %d", &c, &r, &k, &x);

    int M[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            M[i][j] = 0;
            if(i+1<=k) M[i][j] = x;
            if(j+1<=k) M[i][j] = x;
            if(i+k>r-1) M[i][j] = x; 
            if(j+k>c-1) M[i][j] = x; 
        }
    }

    printf("P2\n");
    printf("%d %d\n", r, c);
    printf("255\n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d", M[i][j]);
            if(j!=c-1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}