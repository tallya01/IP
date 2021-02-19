#include <stdio.h>

int main() {
    int n, i, aux, aux2;
    char str[5];

    scanf("%d", &n);

    for(i=0; i<n; i++){
        aux=aux2=0;
        scanf("%*c");
        scanf("%[^\n]", str);
        if(str[3]=='\0'){
            switch(str[0]){
                case 'o':{
                    aux++;
                    break;
                }
                case 't':{
                    aux2++;
                    break;
                }
            }
            switch(str[1]){
                case 'n':{
                    aux++;
                    break;
                }
                case 'w':{
                    aux2++;
                    break;
                }
            }
            switch(str[2]){
                case 'e':{
                    aux++;
                    break;
                }
                case 'o':{
                    aux2++;
                    break;
                }
            }
            if(aux==2) printf("1\n");
            if(aux2==2) printf("2\n");
        }
        else{
            if(str[0]=='t') aux++;
            if(str[1]=='h') aux++;
            if(str[2]=='r') aux++;
            if(str[3]=='e') aux++;
            if(str[4]=='e') aux++;
            if(aux==4) printf("3\n");
        }
    }

    return 0;
}