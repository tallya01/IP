#include <stdio.h>
#include <math.h>

int main() {
    float altura, aresta, areah, areap;

    scanf("%f %f", &altura, &aresta);

    areah = (3 * pow(aresta,2) * sqrt(3)) / 2;
    areap = (areah * altura) / 3;

    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", areap);

    return 0;
}