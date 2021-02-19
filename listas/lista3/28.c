#include <stdio.h>

char * tiraEspacos(char * str, char * noSpace);
char * colocaEspacos(char * str, char * noSpace);

int main() {
    char str[51], noSpace[51];
    int i;

    while(scanf("%[^\n]", str) != EOF){
        tiraEspacos(str, noSpace);
        for(i=0;noSpace[i]!='\0';i++){
            if(i%2==0){
                if(noSpace[i]>='a' && noSpace[i]<='z') noSpace[i] -= 32;
            }
            else{
                if(noSpace[i]>='A' && noSpace[i]<='Z') noSpace[i] += 32;
            }
        }
        colocaEspacos(str, noSpace);
        printf("%s\n", str);
        scanf("%*c");
    }

    return 0;
}

char * tiraEspacos(char * str, char * noSpace){
    int i, k;
    for(i=0, k=0; str[i]!='\0'; i++){
        if(str[i]!=32){
            noSpace[k]=str[i];
            k++;
        }
    }
    noSpace[k] = '\0';

    return noSpace;
}

char * colocaEspacos(char * str, char * noSpace){
    int i, k;
    for(i=0, k=0; str[i]!='\0'; i++){
        if(str[i]!=32){
            str[i]=noSpace[k];
            k++;
        }
    }
    str[i] = '\0';

    return str;
}