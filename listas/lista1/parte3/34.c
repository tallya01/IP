    #include <stdio.h>
    #include <math.h>
     
    int main() {
        int n, aux, cont, cont2, t=1, pos=0;
     
        scanf("%d", &n);
     
        while(n<=1){
            printf("Fatoracao nao e possivel para o numero %d!\n", n);
            scanf("%d", &n);
        }
     
        aux=n;

        int primos[n];
        primos[0] = 2;

        //pega os n primeiros primos
        for(cont=2; cont<=n; cont++){
            for(cont2=cont-1; cont2>1; cont2--){
                if(cont%cont2==0) t=0;
            }
            if(t!=0){
                primos[pos] = cont;
                pos++;
            }
            t=1;
        }

        //preenche as posições vazias do vetor com 0 
        for(t=pos+1; t<n; t++){
            primos[t] = 0;
        }
     
        printf("%d = ", n);

        cont=0;
     
        while(aux!=1){
            while(primos[cont] != 0 && aux%primos[cont]==0){
                aux /= primos[cont];
                printf("%d", (primos[cont]));
                if(aux/primos[cont] != 0) printf(" x ");
            }
            cont++;
        }
     
        printf("\n");
     
        return 0;
    }