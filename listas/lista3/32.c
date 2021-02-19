#include <stdio.h>

int contaAcertos(int * sena, int * aposta);

int main() {
    int dezenas[6];
    int n, i, j, sena, quina, quadra;
    int aposta[6];

    sena=quina=quadra=0;

    for(i=0;i<6;i++){
        scanf("%d", &dezenas[i]);
    }

    scanf("%d", &n);

    for(i=0;i<n;i++){
        for(j=0;j<6;j++){
            scanf("%d", &aposta[j]);
        }
        if(contaAcertos(dezenas, aposta)==6) sena++;
        else if(contaAcertos(dezenas, aposta)==5) quina++;
        else if(contaAcertos(dezenas, aposta)==4) quadra++;
    }

    if(sena==0) printf("Nao houve acertador para sena\n");
    else printf("Houve %d acertador(es) da sena\n", sena);
    if(quina==0) printf("Nao houve acertador para quina\n");
    else printf("Houve %d acertador(es) da quina\n", quina);
    if(quadra==0) printf("Nao houve acertador para quadra\n");
    else printf("Houve %d acertador(es) da quadra\n", quadra);

    return 0;
}

int contaAcertos(int * dezenas, int * aposta){
    int i, j, acertos=0;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(dezenas[j]==aposta[i]) acertos++;
        }
    }

    return acertos;
}