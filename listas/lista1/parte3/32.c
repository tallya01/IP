#include <stdio.h>
#include <math.h>

int main() {
    int n, cont, f, cont2;
    double x, e=0;

    scanf("%lf", &x);
    scanf("%d", &n);

    for(cont=0; cont<=n;cont++){
        if(cont==0) f=1;
        else{
            for(f=cont, cont2=f-1; cont2>=1; cont2--){
                f *= cont2;
            }
        }
        e += pow(x,cont) / f;
    }

    printf("e^%.2lf = %lf\n", x, e);

    return 0;
}