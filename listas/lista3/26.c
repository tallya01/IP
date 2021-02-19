#include <stdio.h>
#include <string.h>

#define N 256

char * str_clean(char * str, char * clr);

int main() {
    char str[N]; // string inicial
    char clr[N]; // lista de caracteres indesejados
    scanf("%[^\n]", str);
    scanf("\n%[^\n]", clr);
    str_clean(str, clr);
    printf("%s\n", str);
    return 0;
}

char * str_clean(char * str, char * clr){
    int i, j, k, aux;
    char nstr[N];

    for(i=0, k=0; str[i]!='\0'; i++){
        aux=0;
        for(j=0; clr[j]!='\0'; j++){
            if(str[i]==clr[j]){
                aux=1;
            }
        }
        if(aux==0){
            nstr[k]=str[i];
            k++;
        }
    }
    nstr[k] = '\0';

    for(i=0;nstr[i]!='\0';i++){
        if(nstr[i]==32 && nstr[i+1]==32){
            for(k=i; nstr[k]!='\0';k++){
                    nstr[k] = nstr[k+1];
                }
        } 
    }

    for(i=0; nstr[i]!='\0'; i++){
        str[i] = nstr[i];
    }
    str[i] = '\0';

    return str;
}