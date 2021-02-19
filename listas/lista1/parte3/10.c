#include <stdio.h>

int main(){
    float n, i, k, s, cont;

    scanf("%f", &n);
    scanf("%f", &i);
    scanf("%f", &k);
    scanf("%f", &s);

    printf("Tabuada de soma:\n");
    for(cont=0; cont<k; cont++){
        printf("%.2f + %.2f = %.2f\n", n, (i+(cont*s)), (n+(i+(cont*s))));
    }
    printf("Tabuada de subtracao:\n");
    for(cont=0; cont<k; cont++){
        printf("%.2f - %.2f = %.2f\n", n, (i+(cont*s)), (n-(i+(cont*s))));
    }
    printf("Tabuada de multiplicacao:\n");
    for(cont=0; cont<k; cont++){
        printf("%.2f x %.2f = %.2f\n", n, (i+(cont*s)), (n*(i+(cont*s))));
    }
    printf("Tabuada de divisao:\n");
    for(cont=0; cont<k; cont++){
        printf("%.2f / %.2f = %.2f\n", n, (i+(cont*s)), (n/(i+(cont*s))));
    }

    return 0;
}