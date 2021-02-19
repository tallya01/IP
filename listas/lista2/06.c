#include <stdio.h>

double raiz(double n, double e);

int main() {
    double n, e;

    scanf("%lf", &n);
    scanf("%lf", &e);

    raiz(n,e);

    return 0;
}

double raiz(double n, double e){
    double e2=e, rk = 0, rk_ant = 1, mod;

    while(rk * rk != n-e){
        rk = (rk_ant + n/rk_ant)/2;
        mod = (n-rk*rk) < 0? -(n-rk*rk) : (n-rk*rk);
        e2 = (n >= rk * rk) ? n - rk * rk : rk * rk - n;
        printf("r: %.9lf, err: %.9lf\n", rk, e2);
        if(mod<=e) break;
        else{
            rk_ant = rk;
        }
    }

    return 0;
}