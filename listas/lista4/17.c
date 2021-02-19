#include <stdio.h>

int contaQuadra(int * sena, int aposta[][6], int n);
int contaQuina(int * sena, int aposta[][6], int n);
int contaSena(int * sena, int aposta[][6], int n);

int main() {
    int dezenas[6];
    int n, i, j, sena, quina, quadra;

    sena=quina=quadra=0;

    scanf("%d", &n);

    int aposta[n][6];

    for(i=0;i<n;i++){
        for(j=0;j<6;j++){
            scanf("%d", &aposta[i][j]);
        }
    }

    for(i=0;i<6;i++){
        scanf("%d", &dezenas[i]);
    }

    quadra = contaQuadra(dezenas, aposta, n);
    quina = contaQuina(dezenas, aposta, n);
    sena = contaSena(dezenas, aposta, n);

    if(sena==0) printf("Nao houve acertador para sena\n");
    else printf("Houve %d acertador(es) da sena\n", sena);
    if(quina==0) printf("Nao houve acertador para quina\n");
    else printf("Houve %d acertador(es) da quina\n", quina);
    if(quadra==0) printf("Nao houve acertador para quadra\n");
    else printf("Houve %d acertador(es) da quadra\n", quadra);

    return 0;
}

int contaQuadra(int * dezenas, int aposta[][6], int n){
    int i, j, k, acertos, ganhadores=0;

    for(i=0;i<n;i++){
        acertos = 0;
        for(k=0;k<6;k++){
            for(j=0;j<6;j++){
                if(dezenas[k]==aposta[i][j]) acertos++;
            }
        }
        if(acertos==4) ganhadores++;
    }

    for(i=0;i<n;i++){
        for(j=0;j<6;j++){
            if(aposta[i][j]<1 || aposta[i][j]>60) ganhadores--;
            for(k=0;k<6;k++){
                if(aposta[i][j]==aposta[i][k] && j!=k) ganhadores--;
            }
        }
    }

    return ganhadores;
}

int contaQuina(int * dezenas, int aposta[][6], int n){
    int i, j, k, acertos, ganhadores=0;

    for(i=0;i<n;i++){
        acertos = 0;
        for(k=0;k<6;k++){
            for(j=0;j<6;j++){
                if(dezenas[k]==aposta[i][j]) acertos++;
            }
        }
        if(acertos==5) ganhadores++;
    }

    for(i=0;i<n;i++){
        for(j=0;j<6;j++){
            if(aposta[i][j]<1 || aposta[i][j]>60) ganhadores--;
            for(k=0;k<6;k++){
                if(aposta[i][j]==aposta[i][k] && j!=k) ganhadores--;
            }
        }
    }

    return ganhadores;
}

int contaSena(int * dezenas, int aposta[][6], int n){
    int i, j, k, acertos, ganhadores=0;

    for(i=0;i<n;i++){
        acertos = 0;
        for(k=0;k<6;k++){
            for(j=0;j<6;j++){
                if(dezenas[k]==aposta[i][j]) acertos++;
            }
        }
        if(acertos==6) ganhadores++;
    }

    for(i=0;i<n;i++){
        for(j=0;j<6;j++){
            if(aposta[i][j]<1 || aposta[i][j]>60) ganhadores--;
            for(k=0;k<6;k++){
                if(aposta[i][j]==aposta[i][k] && j!=k) ganhadores--;
            }
        }
    }

    return ganhadores;
}