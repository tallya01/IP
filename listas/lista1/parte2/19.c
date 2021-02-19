#include <stdio.h>

//corrigir!!!!

int main() {
    float a, b, c, d, aux;
    
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    if(a>b){
        aux = a;
        a = b;
        b = aux;
    }
    if(a>c){
        aux = a;
        a = c;
        c = aux;
    }
    if(a>d){
        aux = a;
        a = d;
        d = aux;
    }
    if(b>c){
        aux = b;
        b = c;
        c = aux;
    }
    if(b>d){
        aux = b;
        b = d;
        d = aux;
    }
    if(c>d){
        aux = c;
        c = d;
        d = aux;
    }

    printf("%.2f, %.2f, %.2f, %.2f\n", a, b, c, d);

    return 0;
}