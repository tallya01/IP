#include <stdio.h>
#include <math.h>

int main() {
    int n, cont, cont2;
    unsigned long int f;
    double x, sen=0;

    scanf("%lf", &x);
    scanf("%d", &n);

    for(cont=0; cont<=n;cont++){
        if(cont==0) f=1;
        else{
            for(f=cont*2+1, cont2=f-1; cont2>=1; cont2--){
                f *= cont2;
            }
        }
        sen += (pow((-1),cont) * pow(x,(2*cont+1))) / f;
    }

    printf("seno(%.2lf) = %lf\n", x, sen);

    return 0;
}