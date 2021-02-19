#include <stdio.h>

int main() {
    int n, cont;
    double c, f;

    scanf("%d", &n);

    for(cont=1; cont<=n; cont++){
        scanf("%lf", &f);
        c = (5*(f-32))/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", f, c);
    }

    return 0;
}