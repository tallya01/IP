#include <stdio.h>

int main() {
    int x, y, cont;

    scanf("%d %d", &x, &y);

    if((x%2) != 0)
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    else {
        for(cont=1;cont<=y;cont++){
            printf("%d ", x);
            x += 2;
        }
        printf("\n");
    }

    return 0;
}