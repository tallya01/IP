#include <stdio.h>

int fimNum(int * bin);

int main() {
    int n=0, i, end;
    int bin[32];

    while(scanf("%d", &n) != EOF){
        i=0;
        if(n!=0){
            while(n!=1){
            bin[i] = n%2;
            n/=2;
            i++;
            }
        }
        bin[i] = 5;
        end = fimNum(bin);
        //printf("%d", end); 
        printf("%d", n); 
        for(i=end; i>=0; i--){
            if(bin[i] != 5) printf("%d", bin[i]);
        }
        printf("\n");       
    }

    return 0;
}

int fimNum(int * bin){
    int i=0;
    while(1){
        if(bin[i]==5) return i;
        i++;
    }
}