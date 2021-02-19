#include <stdio.h>

int main() {
    int num, alg[5];
    
    scanf("%d", &num);

    alg[1] = num / 10000;
    alg[2] = num / 1000 - alg[1] * 10;
    alg[3] = num / 100 - alg[1] * 100 - alg[2] * 10;
    alg[4] = num / 10 - alg[1] * 1000 - alg[2] * 100 - alg[3] * 10;
    alg[5] = num - alg[1] * 10000 - alg[2] * 1000 - alg[3] * 100 - alg[4] *10;

    if(alg[1] > 9) printf("NUMERO INVALIDO\n");
    else if(alg[1]){
        if(alg[1] == alg[5] && alg[2] == alg[4]) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else if(alg[2]){
        if(alg[2] == alg[5] && alg[3] == alg[4]) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else if(alg[3]){
        if(alg[3] == alg[5]) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else if(alg[4]){
        if(alg[4] == alg[5]) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else printf("PALINDROMO\n");

    return 0;
}