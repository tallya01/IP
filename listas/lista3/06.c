#include <stdio.h>

int main(){
    char str[10000];
    int n, i, j, qtdl, qtdv, qtdc;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        qtdl=qtdv=qtdc=0;
        scanf("%*c");
        scanf("%[^\n]", str);
        for(j=0; str[j]!='\0'; j++){
            if((int)str[j]>=65 && (int)str[j]<=90 || (int)str[j]>=97 && (int)str[j] <=122){
                qtdl++;
                switch(str[j]){
                    case 'A':
                    case 'a':
                    case 'E':
                    case 'e':
                    case 'I':
                    case 'i':
                    case 'O':
                    case 'o':
                    case 'U':
                    case 'u':{
                        qtdv++;
                        break;
                    } 
                    default: qtdc++;
                }
            }
        }
        printf("Letras = %d\n", qtdl);
        printf("Vogais = %d\n", qtdv);
        printf("Consoantes = %d\n", qtdc);
    }

    return 0;
}