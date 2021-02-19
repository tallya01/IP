#include <stdio.h>
#include <math.h>

int potencia_prima(int n, int * k, int * p);
int primo(int pos); //função pra pegar o enésimo primo

int main(){
    int n, a, b, cont=1, cont2=1;

    scanf("%d", &n);

    while(cont<=n){
        if(potencia_prima(cont2, &a, &b)==1){
            printf("%d : %d^%d\n", cont2, a, b);
            cont++;
        } 
        cont2++;
    }

    return 0;
}

int primo(int pos){ // pega o enésimo primo
    int cont, cont2, i=1, aux, num;
    if(pos==1) num=2;
    else{
        for(cont=3;;cont++){
            for(cont2=2;cont2<cont;cont2++){
                if(cont%cont2==0){
                    aux=0;
                    break;
                }
                else aux=1;
            }
            if(aux==1) i++;
            if(aux==1 && i==pos){
                num=cont;
                break;
            }
        }
    }
    return num;
}

int potencia_prima(int n, int * k, int * p){
    int cont, cont2=1, pot;
    for(cont=1;;cont++){
        for(cont2=1;pow(primo(cont), cont2)<= n; cont2++){
            if(pow(primo(cont), cont2)==n){
                pot=pow(primo(cont), cont2);
                *k = primo(cont);
                *p = cont2;
                return 1;
            }
        }
        if(primo(cont)>n) return 0;
    }

}