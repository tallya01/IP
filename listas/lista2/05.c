#include <stdio.h>
#include <math.h>

int raizesEq2Grau(double a, double b, double c);

int main(){
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    raizesEq2Grau(a,b,c);

    return 0;
}

int raizesEq2Grau(double a, double b, double c){
    double delta, x1, x2, aux;

    delta = pow(b,2) - (4*a*c);

    if(delta<0){
        printf("RAIZES IMAGINARIAS\n");
        return 0;
    }
    if(delta==0){
        printf("RAIZ UNICA\n");
        x1 = (-b) / (2*a);
        printf("X1 = %.2lf\n", x1);
        return 1;
    }
    if(delta>0){
        printf("RAIZES DISTINTAS\n");
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        if(x1>x2){
            aux=x1;
            x1=x2;
            x2=aux;
        }
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
        return 2;
    }
}