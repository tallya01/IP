#include <stdio.h>
#include <math.h>

int main() {
    double l, x1, x2;
    int a, b, c, delta;

    scanf("%lf %d %d %d", &l, &a, &b, &c);

    delta = (b*b) - (4*a*c);

    if(delta<0) printf("POSICOES IMAGINARIAS\n");
    else{
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("POSICOES: x1=%.2lf e x2=%.2lf", x1, x2);

        if(x1>(l/2) || x1 <(-l/2) || x2>(l/2) || x2<(-l/2)) printf(" (FORA DO EXPERIMENTO)");
        printf("\n");

        if((a+b+c)%3 == 0) printf("FATO 1: DESAPARECIDA\n");
        if(c%2 == 0 && c<(a+b)) printf("FATO 2: ORIGEM\n");
    }

    return 0;
}