#include <stdio.h>

int main() {
    double a, b, res, res_c;
    char sinal, igual;

    scanf("%lf%c%lf%c%lf", &a, &sinal, &b, &igual, &res);

    switch (sinal)
    {
    case '+':
        if(a+b == res) printf("CORRETO\n");
        else printf("ERRADO! O resultado deveria ser: %lf\n", (a+b));
        break;
    case '-':
        if(a-b == res) printf("CORRETO\n");
        else printf("ERRADO! O resultado deveria ser: %lf\n", (a-b));
        break;
    case '*':
        if(a*b == res) printf("CORRETO\n");
        else printf("ERRADO! O resultado deveria ser: %lf\n", (a*b));
        break;
    case '/':
        if(a/b == res) printf("CORRETO\n");
        else printf("ERRADO! O resultado deveria ser: %lf\n", (a/b));
        break;
    
    default:
        break;
    }

    return 0;
}