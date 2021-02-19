#include <stdio.h>
#include <math.h>

int next_power(int n, int p);

int main(){
    int n, p;

    scanf("%d %d", &n, &p);

    next_power(n, p);

    return 0;
}

int next_power(int n, int p){
    int pot, pot2, cont;
    for(cont=n; cont>=0; cont--){
        if(pow(cont,p)<=n){
        pot = pow(cont,p);
        pot2 = pow(cont+1,p);
            if(n-pot < pot2-n) printf("%d -> %d^%d = %d\n", n, cont, p, pot);
            else printf("%d -> %d^%d = %d\n", n, cont+1, p, pot2);
        return 0;
        }
    }
}