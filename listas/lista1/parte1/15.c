#include <stdio.h>

int main() {
    int num, cont;
    int resto[8];

    scanf("%d", &num);

    if(num < 0 || num > 255)
        printf("Numero invalido!");

    else {
        for(cont=0;cont<8;cont++) {
            resto[cont] = num % 2;
            num = num / 2;
        }

        for(cont=7;cont>=0;cont--) {
            printf("%d", resto[cont]);
        }
    }

    printf("\n");
    
    return 0;
}