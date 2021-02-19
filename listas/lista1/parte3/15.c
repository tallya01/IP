#include <stdio.h>
#include <math.h>

int main() {
    int n, x, a, i = 0;
    int primos[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

    scanf("%d", &n);

    if(n<0) printf("Numero invalido!\n");
    else if(n == 0 || n == 1) printf("NAO PRIMO\n");
    else{
        x = ceil(sqrt(n));
        for(a = 0; primos[a]<=x; a++){
            if(n%primos[a] == 0){
                i = 1;
                printf("NAO PRIMO\n");
                break;
            } 
            else continue;            
        }
        if(i!=1) printf("PRIMO\n");
    }

    return 0;
}