#include <stdio.h>

int idx(char c, char * str);

int main(){
    int n, i, ind; 
    char str[499], c;

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%*c%c%*c%[^\n]", &c, str);
        ind = idx(c, str);
        if(ind!=-1) printf("Caractere %c encontrado no indice %d da string.\n", c, ind);
        else printf("Caractere %c nao encontrado.\n", c);
    }

    return 0;
}

int idx(char c, char * str){
    int i;
    for(i=0;i<499, str[i]!='\0';i++){
        if(str[i]==c) return i;
    }
    return -1;
}