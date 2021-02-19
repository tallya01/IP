#include <stdio.h>

int main() {
    int n, n_time, aux, aux2, cont=1;

    scanf("%d", &n);

    if(n<2) printf("Campeonato invalido!\n");
    else {
        for(n_time=1; n_time<=n; n_time++){
            for(aux=cont, aux2=n_time+1; aux<=n, aux2<=n; aux++, aux2++){
                printf("Final %d: Time%d X Time%d\n", aux, n_time, aux2);
            }
            cont = aux;
        }
    }

    return 0;
}