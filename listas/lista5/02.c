#include <stdio.h>
#include <stdlib.h>

struct produtos_feira{
    char nome[51];
    double valor;
};

typedef struct produtos_feira feira;

struct produtos_compra{
    char nome[51];
    double quant;
};

typedef struct produtos_compra compras;

int main() {
    int idas, i, j, k, qtd1, qtd2, index, aux;
    double total;
    feira * f = NULL;
    compras * c = NULL;

    scanf("%d", &idas);

    for(i=0;i<idas;i++){
        total = 0;

        scanf("%d", &qtd1);
        f = calloc(qtd1, sizeof(feira));
        for(j=0;j<qtd1;j++) scanf("%s %lf", f[j].nome, &f[j].valor);

        scanf("%d", &qtd2);
        c = calloc(qtd2, sizeof(compras));
        for(j=0;j<qtd2;j++) scanf("%s %lf", c[j].nome, &c[j].quant);

        for(j=0;j<qtd1;j++){
            for(k=0;k<qtd2;k++){
                aux=0;
                for(index=0;f[j].nome[index]!='\0';index++){
                    if(f[j].nome[index]==c[k].nome[index]) aux=0;
                    else{
                        aux=1;
                        break;
                    } 
                }
                if(aux==0) total += f[j].valor * c[k].quant;
            }
        }
        
        printf("R$ %.2lf\n", total);

        free(f);
        free(c);
    }

    return 0;
}