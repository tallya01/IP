#include <stdio.h>

int main() {
    int n, i, j, tr=0;

    scanf("%d", &n);

    int A[n][n], T[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &A[i][j]);
        }
    }

    for(i=0;i<n;i++){
        tr += A[i][i];
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            T[j][i] = A[i][j];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            A[i][j] *= tr;
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            A[i][j] += T[i][j];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d", A[i][j]);
            if(j!=n-1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}