#include <stdio.h>

int main() {
    int r, c, i, j, menor, maior, total, freqMenor=0, freqMaior=0;
    double txMenor, txMaior, total2;

    scanf("%d %d", &r, &c);

    int A[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &A[i][j]);
        }
    }

    menor = maior = A[0][0];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(A[i][j]<menor) menor = A[i][j];
            if(A[i][j]>maior) maior = A[i][j];
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(A[i][j]==menor) freqMenor++;
            if(A[i][j]==maior) freqMaior++;
        }
    }

    total = r*c;
    total2 = total;

    txMenor = (freqMenor/total2)*100;
    txMaior = (freqMaior/total2)*100;

    printf("%d %.2lf%%\n", menor, txMenor);
    printf("%d %.2lf%%\n", maior, txMaior);

    return 0;
}