#include <stdio.h>

int main() {
    double n, e, rk = 0, rk_ant = 1, mod;

    scanf("%lf", &n);
    scanf("%lf", &e);
    double e2 = e;

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