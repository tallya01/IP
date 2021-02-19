#include <stdio.h>

int main(){
    int n, k;
    double soma;

    scanf("%d", &n);

    if(n<=0) printf("Numero invalido!\n");
    else {
        for(k=1, soma=0.0;k<=n;k++){
            soma += 1.0/k;
        }
        printf("%.6lf\n", soma);
    } 

    return 0;
}