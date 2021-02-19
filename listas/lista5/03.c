#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 24

struct Natal{
    char pais[50];
    char saudacao[50];
};

typedef struct Natal natal;

int main() {
    char p[50];
    natal * trad = NULL;
    int i, aux;

    trad = calloc(N, sizeof(natal));

    sprintf(trad[0].pais,"brasil");
    sprintf(trad[1].pais,"alemanha");
    sprintf(trad[2].pais,"austria");
    sprintf(trad[3].pais,"coreia");
    sprintf(trad[4].pais,"espanha");
    sprintf(trad[5].pais,"grecia");
    sprintf(trad[6].pais,"estados-unidos");
    sprintf(trad[7].pais,"inglaterra");
    sprintf(trad[8].pais,"australia");
    sprintf(trad[9].pais,"portugal");
    sprintf(trad[10].pais,"suecia");
    sprintf(trad[11].pais,"turquia");
    sprintf(trad[12].pais,"argentina");
    sprintf(trad[13].pais,"chile");
    sprintf(trad[14].pais,"mexico");
    sprintf(trad[15].pais,"antardida");
    sprintf(trad[16].pais,"canada");
    sprintf(trad[17].pais,"irlanda");
    sprintf(trad[18].pais,"belgica");
    sprintf(trad[19].pais,"italia");
    sprintf(trad[20].pais,"libia");
    sprintf(trad[21].pais,"siria");
    sprintf(trad[22].pais,"marrocos");
    sprintf(trad[23].pais,"japao");

    sprintf(trad[0].saudacao,"Feliz Natal!");
    sprintf(trad[1].saudacao,"Frohliche Weihnachten!");
    sprintf(trad[2].saudacao,"Frohe Weihnacht!");
    sprintf(trad[3].saudacao,"Chuk Sung Tan!");
    sprintf(trad[4].saudacao,"Feliz Navidad!");
    sprintf(trad[5].saudacao,"Kala Christougena!");
    sprintf(trad[6].saudacao,"Merry Christmas!");
    sprintf(trad[7].saudacao,"Merry Christmas!");
    sprintf(trad[8].saudacao,"Merry Christmas!");
    sprintf(trad[9].saudacao,"Feliz Natal!");
    sprintf(trad[10].saudacao,"God Jul!");
    sprintf(trad[11].saudacao,"Mutlu Noeller");
    sprintf(trad[12].saudacao,"Feliz Navidad!");
    sprintf(trad[13].saudacao,"Feliz Navidad!");
    sprintf(trad[14].saudacao,"Feliz Navidad!");
    sprintf(trad[15].saudacao,"Merry Christmas!");
    sprintf(trad[16].saudacao,"Merry Christmas!");
    sprintf(trad[17].saudacao,"Nollaig Shona Dhuit!");
    sprintf(trad[18].saudacao,"Zalig Kerstfeest!");
    sprintf(trad[19].saudacao,"Buon Natale!");
    sprintf(trad[20].saudacao,"Buon Natale!");
    sprintf(trad[21].saudacao,"Milad Mubarak!");
    sprintf(trad[22].saudacao,"Milad Mubarak!");
    sprintf(trad[23].saudacao,"Merii Kurisumasu!");

    while(scanf("%[^\n]%*c", p) != EOF){
        aux=0;
        for(i=0;i<N;i++){
            if(strcmp(p,trad[i].pais)==0){
                printf("%s\n", trad[i].saudacao);
                aux=1;
            } 
        }
        if(aux==0) printf("-- NOT FOUND --\n");
    }

    free(trad);

    return 0;
}