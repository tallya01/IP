#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, aux1 = 0, aux2 = 0, aux3 = 0, cont, aux4 = 0, m = 1;
    int divisores[20] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71};

    scanf("%d %d %d", &a, &b, &c);
    
    aux1 = a;
    aux2 = b;
    aux3 = c;

    for(cont = 0; cont < 20; cont++){
        aux4 = 0;
        while((aux1%divisores[cont]) == 0 || (aux2%divisores[cont]) == 0 || (aux3%divisores[cont]) == 0){
            if(aux1%divisores[cont] == 0) aux1 /= divisores[cont];
            if(aux2%divisores[cont] == 0) aux2 /= divisores[cont];
            if(aux3%divisores[cont] == 0) aux3 /= divisores[cont];
            printf("%d %d %d :%d\n", a, b, c, divisores[cont]);
            a = aux1;
            b = aux2;
            c = aux3;
            aux4++;
        }
        m *= (pow(divisores[cont], aux4));
    }

    printf("MMC: %d\n", m);

    return 0;
}