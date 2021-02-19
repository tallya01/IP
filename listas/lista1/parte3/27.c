#include <stdio.h>

int main() {
    int qtd, cont, aux;
    double n, n_ant;

    while(1){
        scanf("%d", &qtd);
        if(qtd==0) break;
        if(qtd==1){
        	printf("DESORDENADA\n");
        	break;
        }
        aux=1;

        for(cont=1; cont<=qtd; cont++){
            scanf("%lf", &n);
            if(cont==1) n_ant = n;
            else if(n<n_ant){
                aux=0;
            }
            n_ant = n;
        }
        if(aux==0) printf("DESORDENADA\n");
        else printf("ORDENADA\n");
    }

    return 0;
}