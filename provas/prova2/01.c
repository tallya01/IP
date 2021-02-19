#include <stdio.h>

int digit_count(long int n);

int main(){
    long int n;
    int ndig;

    scanf("%ld", &n);

    ndig = digit_count(n);

    printf("Numero de digitos: %d\n", ndig);

    return 0;
}

int digit_count(long int n){
    unsigned long int i = 9;
    int c = 1;
    while(1){
        if(n<=i) return c;
        else{
            i = i*10+9;
            c++;
        }
    }
}