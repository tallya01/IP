#include <stdio.h>

void separaDigitos(int n1, int n2);

int main(){
    int n, n1, n2, cont;

    scanf("%d", &n);

    for(cont=1;cont<=n;cont++){
        scanf("%d %d", &n1, &n2);
        separaDigitos(n1, n2);
    }
    
    return 0;
}

void separaDigitos(int n1, int n2){
    int alg1_1, alg2_1, alg3_1, alg1_2, alg2_2, alg3_2;

        alg1_1 = n1 % 10;
        alg2_1 = (n1 / 10) % 10;
        alg3_1 = n1 / 100;

        alg1_2 = n2 % 10;
        alg2_2 = (n2 / 10) % 10;
        alg3_2 = n2 / 100;

        if(alg1_1 > alg1_2) printf("%d%d%d\n", alg1_1, alg2_1, alg3_1);
        else if (alg1_1 == alg1_2){
            if(alg2_1 > alg2_2) printf("%d%d%d\n", alg1_1, alg2_1, alg3_1);
            else if (alg2_1 == alg2_2){
                if(alg3_1 > alg3_2) printf("%d%d%d\n", alg1_1, alg2_1, alg3_1);
                else printf("%d%d%d\n", alg1_2, alg2_2, alg3_2);
            }
            else printf("%d%d%d\n", alg1_2, alg2_2, alg3_2);
        }
        else printf("%d%d%d\n", alg1_2, alg2_2, alg3_2);  
}