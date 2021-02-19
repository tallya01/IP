#include <stdio.h>
#include <string.h>

#define MAX_WORDS 200
#define MAX_WORD_LEN 64+1

int str_split(char * str, char m[][MAX_WORD_LEN], char * sep);

int main() {
    char str[MAX_WORD_LEN*MAX_WORDS];
    char sep[128];
    int qtdSep = 0, i, j, ret;

    scanf("%[^\n]", str);
    scanf("%*c%[^\n]", sep);

    for(i=0;str[i]!='\0';i++){
        for(j=0;sep[j]!='\0';j++){
            if(str[i]==sep[j]) qtdSep++;
        }
    }

    char m[qtdSep+1][MAX_WORD_LEN];

    ret = str_split(str, m, sep);

    return 0;
}

int str_split(char * str, char m[][MAX_WORD_LEN], char * sep){
    char word[MAX_WORD_LEN];
    int wLen[200];
    int i, aux = 0, inicWord=0, maior, qtd=0;
    char * token;

    for(i=0;i<200;i++){
        wLen[i]=0;
    }

    maior = wLen[0];

    token = strtok(str, sep);

    aux=0;
    while(token!=NULL){
        wLen[aux] = strlen(token);
        printf("(%lu)%s\n", strlen(token), token);
        token = strtok(NULL, sep);
        aux++;
    }

    for(i=0;i<200;i++){
        if(wLen[i]>maior) maior=wLen[i];
    }

    for(i=0;i<200;i++){
        if(wLen[i]==maior) qtd++;
    }

    printf("%d\n", qtd);

    return 1;
}