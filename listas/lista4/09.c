#include <stdio.h>

int main() {
    int r, c, i, j, num;

    scanf("%d %d", &r, &c);

    int M[r][c];

    for(i=0, num=1;i<r;i++){
        for(j=0;j<c;j++){
            if((i+j)%2==0) M[i][j] = 0;
            else{
                M[i][j] = num;
                num++;
            }
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