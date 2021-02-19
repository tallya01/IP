#include <stdio.h>

int main() {
    int n, i, j, nCams;

    scanf("%d", &n);

    int M[n+1][n+1];

    for(i=0;i<n+1;i++){
        for(j=0;j<n+1;j++){
            scanf("%d", &M[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            nCams = 0;
            if(M[i][j]==1) nCams++;
            if(M[i][j+1]==1) nCams++;
            if(M[i+1][j]==1) nCams++;
            if(M[i+1][j+1]==1) nCams++;
            if(nCams>=2) printf("S");
            else printf("U");
        }
        printf("\n");
    }

    return 0;
}