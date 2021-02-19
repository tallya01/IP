#include <stdio.h>

int main() {
    int n, cont, soma = 0, ud, cont2, cont3;

    scanf("%d", &n);

    for(cont=n; cont>=1; cont--){
        if(n%2 != 0){ //pega o menor divisor diferente de 1 dos ímpares
            for(cont2=1; cont2<=n; cont2++){
                if(n==1){
                    ud = 1;
                    break;
                }
                else if(cont2>1 && n%cont2==0){
                    ud = cont2;
                    break;
                }
                else {
                    ud = 1;
                }
            }
        }
        if(n%cont == 0 && n/cont != n){
            soma += n/cont;
            if(cont == n) printf("%d = ", n);
            printf("%d", (n/cont));
            if(n%2==0){
                if(n/cont != n/2) printf(" + ");
            }
            else{
                if(cont!=ud && cont != 1) printf(" + ");
            }
        }
    }
    printf(" = %d ", soma);
    if(soma==n) printf("(NUMERO PERFEITO)\n");
    else printf("(NUMERO NAO E PERFEITO)\n");

    return 0;
}