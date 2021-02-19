#include <stdio.h>

double element_matrix(double m[10][10], double p[10][10], int n, int i, int j);

int main() {
    int n, pot, i, j, k;
    double m[10][10], p[10][10], result[10][10];

    scanf("%d%d", &n, &pot);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++) scanf("%lf", &m[i][j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++) p[i][j]=m[i][j];
    }

    for(k=1;k<pot;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                result[i][j] = element_matrix(m, p, n, i, j);
            } 
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++) p[i][j]=result[i][j];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%.3lf", result[i][j]);
            if(j!=n-1) printf(" ");
        } 
        printf("\n");
    }

    return 0;
}

double element_matrix(double m[10][10], double p[10][10], int n, int i, int j){
    double soma=0;
    int cont;

    for(cont=0;cont<n;cont++){
        soma += p[i][cont] * m[cont][j];
    }

    return soma;
}