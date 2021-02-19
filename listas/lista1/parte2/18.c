#include <stdio.h>

int main() {
    int a, b, c, maior, menor, medio;
    char x, y, z;

    scanf("%d %d %d\n", &a, &b, &c);
    scanf("%c%c%c", &x, &y, &z);

    if(a<b && a<c){
        menor = a;
        if(b<c){
            medio = b;
            maior = c;
        }
        else{
            medio = c;
            maior = b;
        }
    }
    else if(b<a && b<c){
        menor = b;
        if(a<c){
            medio = a;
            maior = c;
        }
        else{
            medio = c;
            maior = a;
        }
    }
    else{
        menor = c;
        if(a<b){
            medio = a;
            maior = b;
        }
        else{
            medio = b;
            maior = a;
        }
    }

    if(x == 'A'){
        if(y == 'B') printf("%d %d %d\n", menor, medio, maior);
        else printf("%d %d %d\n", menor, maior, medio); 
    }
    else if(x == 'B'){
        if(y == 'A') printf("%d %d %d\n", medio, menor, maior);
        else printf("%d %d %d\n", medio, maior, menor);
    }
    else{
        if(y == 'A') printf("%d %d %d\n", maior, menor, medio);
        else printf("%d %d %d\n", maior, medio, menor);
    }

    return 0;
}