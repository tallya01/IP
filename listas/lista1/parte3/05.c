#include <stdio.h>

int main() {
    int v_inic, r, n, cont, soma;

    scanf("%d %d %d", &v_inic, &r, &n);

    for(cont=0, soma=0;cont<n;cont++){
        soma += v_inic + (cont * r);
    }

    printf("%d\n", soma);

    return 0;
}