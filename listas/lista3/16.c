#include <stdio.h>

char * str(int n, char * string);

int main(){
    int t, n, i;
    char texto[499], s;

    scanf("%d", &t);

    for(i=0;i<t;i++){
        scanf("%d%*c%[^\n]", &n, texto);
        if(str(n,texto) != NULL) printf("%s\n", str(n, texto));
    }

    return 0;
}

char * str(int n, char * string){
    string[n] = '\0';
    if(n>499) return NULL;
    return string;
}