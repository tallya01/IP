#include <stdio.h>
#include <string.h>

#define MAX_WORDS 200
#define MAX_WORD_LEN 64+1

int str_split(char * str, char m[][MAX_WORD_LEN], char * sep);

int main() {
    char str[MAX_WORD_LEN*MAX_WORDS];
    char sep[128];
    int qtdSep = 0, i, j;

    scanf("%[^\n]", str);
    scanf("%*c%[^\n]", sep);

    for(i=0;str[i]!='\0';i++){
        for(j=0;sep[j]!='\0';j++){
            if(str[i]==sep[j]) qtdSep++;
        }
    }

    char m[qtdSep+1][MAX_WORD_LEN];

    str_split(str, m, sep);

    return 0;
}

int str_split(char * str, char m[][MAX_WORD_LEN], char * sep){
    char word[MAX_WORD_LEN];
    int wLen[200];
    int i, j, k, l, aux = 0, inicWord=0, lm=0, maior, words=0, qtd=0;

    for(i=0;i<200;i++){
        wLen[i]=0;
    }

    for(i=0;str[i]!='\0';i++){
        for(j=0; sep[j]!='\0'; j++){
            if(str[i]==sep[j] || str[i]=='\0'){
                for(k=inicWord, l=0;str[k]!=sep[j] && str[k]!='\0';k++,l++){
                    word[l] = str[k];
                }
                word[l]='\0';
                wLen[aux]= strlen(word);
                aux++;
                for(k=0;word[k]!='\0';k++){
                    m[lm][k] = word[k];
                }
                m[lm][k]='\0';
                inicWord = i+1;
                lm++;
                printf("%s\n", word);
            }
        }
    }

    maior = wLen[0];

    for(i=0;i<200;i++){
        if(wLen[i]>maior) maior=wLen[i];
    }

    for(i=0;i<200;i++){
        if(wLen[i]==maior) qtd++;
    }

    for(i=0, aux=0;i<=lm;i++,aux++){
        if(i<lm && wLen[aux]!=0) printf("(%d)", wLen[aux]);
        if(m[i][0]>=65 && m[i][0]<=90 || m[i][0]>=97 && m[i][0]<=122){
            for(j=0;m[i][j]!='\0';j++){
            printf("%c", m[i][j]);
        }
        printf("\n");
        }
    }

    printf("%d\n", qtd);

    return 1;
}