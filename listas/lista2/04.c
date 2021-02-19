#include <stdio.h>

int somaDivisores(int n);

int main(){
    int n, soma_div, cont, ud, cont2;

    scanf("%d", &n);

    printf("%d = ", n);

    soma_div=somaDivisores(n);

    printf(" = %d ", soma_div);

    if(soma_div==n) printf("(NUMERO PERFEITO)\n");
    else printf("(NUMERO NAO E PERFEITO)\n");

    return 0;
}

int somaDivisores(int n){
    int soma_div=0, cont, ud, cont2;
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
    }
    cont=n;
    while(cont>1){
        if(n%cont==0){
            soma_div+=n/cont;
            printf("%d", n/cont);
            if(n%2==0){
            if(n/cont != n/2) printf(" + ");
            }
            else{
                if(cont!=ud && cont != 1) printf(" + ");
            }
        } 
        cont--;
    }
    return soma_div;
}