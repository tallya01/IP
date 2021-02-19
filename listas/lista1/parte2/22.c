#include <stdio.h>

int main() {
    float a, b, c, aux;
    int i;

    scanf("%d", &i);
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(i==1){
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
        if(b>c){
            aux = b;
            b = c;
            c = aux;
        }
        printf("%.2f %.2f %.2f\n", a, b, c);
    }
    else if(i==2){
        if(c>b){
            aux = c;
            c = b;
            b = aux;
        }
        if(c>a){
            aux = c;
            c = a;
            a = aux;
        }
        if(b>a){
            aux = b;
            b = a;
            a = aux;
        }
        printf("%.2f %.2f %.2f\n", a, b, c);
    }
    else {
        if(a>b && a>c){
            if(b>c) printf("%.2f %.2f %.2f\n", b, a, c);
            else printf("%.2f %.2f %.2f\n", c, a, b);
        }
        else if(b>a && b>c){
            if(a>c) printf("%.2f %.2f %.2f\n", a, b, c);
            else printf("%.2f %.2f %.2f\n", c, b, a);
        }
        else {
            if(a>b) printf("%.2f %.2f %.2f\n", a, c, b);
            else printf("%.2f %.2f %.2f\n", b, c, a);
        }
    }

    return 0;
}