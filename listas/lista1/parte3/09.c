#include <stdio.h>

int main() {
    int n, cont;
    unsigned long int fat;

    scanf("%d", &n);

    fat = n;

    if(n == 0) fat = 1;
    else {
        for(cont=(n-1); cont>0; cont--){
        fat *= cont;
        }
    }

    printf("%d! = %lu\n", n, fat);
    
    return 0;
}