#include <stdio.h>
#include <math.h>

int main() {
    int n, cont, cont2;
    unsigned long int f;
    double x, cos=0;

    scanf("%lf", &x);
    scanf("%d", &n);

    if(x>2*M_PI) x-=2*M_PI;

    for(cont=0; cont<=n;cont++){
        if(cont==0) f=1;
        else{
            for(f=cont*2, cont2=f-1; cont2>=1; cont2--){
                f *= cont2;
            }
        }
        cos += (pow((-1),cont) * pow(x,(2*cont))) / f;
    }

    printf("cos(%.2lf) = %lf\n", x, cos);

    return 0;
}