#include <stdio.h>

double compute_pi(int n);

int main(){
    int n;
    double pi;

    scanf("%d", &n);

    pi = compute_pi(n);

    printf("%.12lf\n", pi);

    return 0;
}

double compute_pi(int n){
    int cont, cont2=2, cont3=1;
    double pi=1;

    for(cont=1;cont<=n;cont++){
        if(cont2==cont3) cont--;
        double aux = cont2;
        pi *= aux/cont3;
        
        if(cont3==cont2+1){
            cont2 += 2;
            cont3--;
        }
        cont3++;
    }

    pi *=2;

    return pi;

}