#include <stdio.h>

int main() {
    int n, cont, contLinha, nTotal = 0;

    scanf("%d", &n);

    nTotal -= n;

    for(contLinha = 1; contLinha<=8; contLinha++){
        if(contLinha % 2 != 0){ //linhas ímpares, começam com quadro escuro
            for(cont = 1; cont <= 8; cont++){
                if(cont % 2 == 0) nTotal += n;
                else nTotal += 2*n;
            }
        }
        else{
            for (cont = 1; cont <= 8; cont++){
                if(cont % 2 == 0) nTotal += 2*n;
                else nTotal += n;
            }
        }
    }

    printf("%d\n", nTotal);

    return 0;
}