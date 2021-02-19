#include <stdio.h>

unsigned long int fat(int n);

int main(){
    unsigned int n;
    unsigned long int f;

    scanf("%u", &n);

    f=fat(n);

    printf("%u! = %lu\n", n, f);

    return 0;
}

unsigned long int fat(int n){
    unsigned long int fat = 1;
    if(n==0) return fat;
    else{
        while(n>1){
            fat*=n;
            n--;
        }
        return fat;
    }
}