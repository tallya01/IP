#include <stdio.h>

int main(){
    int num, cont, cont2, cont3, i;

    scanf("%d", &num);

    for(cont=1; cont<=num; cont++){
        i = cont * (cont-1) + 1;
        printf("%d*%d*%d = ", cont, cont, cont);
        for(cont2=1; cont2<=cont; cont2++){
            printf("%d", i);
            for(cont3=1; cont3<cont; cont3++){
                if(cont2==cont) break;
                printf("+");
                break;
            }
            i += 2;
        }
        printf("\n");
    }

    return 0;
}