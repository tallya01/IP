#include <stdio.h>

int main() {
    int n = 1, n_par = 0, n_impar = 0;
    double s_par = 0, s_impar = 0, media_par, media_impar;

    while (n!=0) {
        scanf("%d", &n);
        if(n%2 == 0){ // n é par
            s_par += n;
            n_par++;
            if(n==0) n_par--;
        }
        else{
            s_impar += n;
            n_impar++;
        }
    } 

    if(n_par == 0) media_par = 0;
    else media_par = s_par/n_par;
    if(n_impar == 0) media_impar = 0;
    else media_impar = s_impar/n_impar;
    
    printf("MEDIA PAR: %lf\n", media_par);
    printf("MEDIA IMPAR: %lf\n", media_impar);

    return 0;
}