#include <stdio.h>

int main() {
    int n, cont, cont2, aux, sd1, sd2, c=2;

    scanf("%d", &n);

    for(cont=1; cont<=n; cont++){ //executa até que sejam encontrados n pares de numeros amigos
        for(aux=c;;aux++){
            sd1=0;
            sd2=0;
            for(cont2=aux;cont2>1;cont2--){ //pega os divisores do primeiro numero
                if(aux%cont2==0 && aux/cont2!=1) sd1 += aux/cont2;
            }
            sd1+=1;

            for(cont2=sd1;cont2>1;cont2--){ //pega os divisores do segundo numero, que e a soma dos divisores do primeiro
                if(sd1%cont2==0 && sd1/cont2!=1) sd2 += sd1/cont2;
            }
            sd2+=1;
           
            if(aux==sd2 && aux<sd1){
                printf("(%d,%d)\n", aux, sd1);
                break;
            }
        }
        c=aux+1;
    }

    return 0;
}