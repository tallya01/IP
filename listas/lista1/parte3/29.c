#include <stdio.h>

int main() {
    double n;
    int i, num, den, aux = 1, cont;

    scanf("%lf", &n);

    i = n;

    while(n-i != 0){
        n *= 10;
        i = n;
        aux *= 10;
    }

    num = n;
    den = aux;

    for(cont=2; cont<=den; cont++){
        if(num%cont == 0 && den%cont == 0){
            num = num/cont;
            den = den/cont;
        }
    }

    printf("%d/%d\n", num, den);

    return 0;
}