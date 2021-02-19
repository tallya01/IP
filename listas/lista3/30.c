#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char str1[1001], str2[1001];
    int fa[5] = {0}, fb[5] = {0}, i=0, aux=0;
    double soma = 0;

    while(1){
        scanf("%c", &str1[i]);
        if(str1[i]==';' || str1[i]=='\n') break;
        i++;
    }

    if(str1[i]=='\n'){
        printf("FORMATO INVALIDO!\n");
        return 0;
    }

    str1[i+1] = '\0';

    scanf("%[^\n]", str2);

    for(i=0; str1[i]!=';';i++){
        if(str1[i] == 'a' || str1[i] == 'A') fa[0]++;
        else if(str1[i] == 'e' || str1[i] == 'E') fa[1]++;
        else if(str1[i] == 'i' || str1[i] == 'I') fa[2]++;
        else if(str1[i] == 'o' || str1[i] == 'O') fa[3]++;
        else if(str1[i] == 'u' || str1[i] == 'U') fa[4]++;
    }

    for(i=0; str2[i]!='\0';i++){
        if(str2[i] == 'a' || str1[i] == 'A') fb[0]++;
        else if(str2[i] == 'e' || str2[i] == 'E') fb[1]++;
        else if(str2[i] == 'i' || str2[i] == 'I') fb[2]++;
        else if(str2[i] == 'o' || str2[i] == 'O') fb[3]++;
        else if(str2[i] == 'u' || str2[i] == 'U') fb[4]++;
    }

    strcat(str1, str2);

    for(i=0;str1[i]!='\0';i++){
        if(str1[i]==';') aux++;
    }

    if(aux!=1){
        printf("FORMATO INVALIDO\n");
        return 0;
    }

    for(i=0;i<5;i++){
        soma += (fa[i] - fb[i]) * (fa[i] - fb[i]);
    }

    printf("(");
    for(i=0;i<5;i++){
        printf("%d", fa[i]);
        if(i!=4) printf(",");
    }
    printf(")\n");

    printf("(");
    for(i=0;i<5;i++){
        printf("%d", fb[i]);
        if(i!=4) printf(",");
    }
    printf(")\n");

    printf("%.2lf\n", sqrt(soma));

    return 0;
}