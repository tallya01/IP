#include <stdio.h>

int main() {
    float nota;

    scanf("%f", &nota);

    if(nota < 6.0){
        printf("NOTA = %.1f CONCEITO = D\n", nota);
    } else if(nota < 7.5) {
        printf("NOTA = %.1f CONCEITO = C\n", nota);
    } else if(nota < 9.0) {
        printf("NOTA = %.1f CONCEITO = B\n", nota);
    } else if(nota <= 10) {
        printf("NOTA = %.1f CONCEITO = A\n", nota);
    }

    return 0;
}