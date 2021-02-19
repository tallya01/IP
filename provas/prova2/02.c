#include <stdio.h>

unsigned long int fatorial(int f);
void pascal(int n, int p);

int main(){
    int n, p;

    scanf("%d %d", &n, &p);

    pascal(n,p);

    return 0;
}

unsigned long int fatorial(int f){
    int i;
    unsigned long int fat = 1;
    if(f==0 || f ==1){
        fat==1;
        return fat;
    }
    for(i=f;i>=1;i--){
        fat *= i;
    }
    return fat;
}


void pascal(int n, int p){
    int cont, cont2, c;
    for(cont=n;cont<=p;cont++){
        for(cont2=0;cont2<cont+1;cont2++){
            c = fatorial(cont) / (fatorial(cont2)*fatorial(cont-cont2));
            printf("%d", c);
            if(cont2!=cont) printf(",");
        }
        printf("\n");
    }
}