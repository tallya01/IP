#include <stdio.h>

int main() {
    int a, b, c, d, soma;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if(a>b && a>c && a>d){
        soma = b + c + d;
        printf("%d\n", soma);
    }
    if(b>a && b>c && b>d){
        soma = a + c + d;
        printf("%d\n", soma); 
    }
    if(c>a && c>b && c>d){
        soma = a + b + d;
        printf("%d\n", soma);
    }
    if(d>a && d>b && d>c){
        soma = a + b + c;
        printf("%d\n", soma);
    }

    return 0;
}