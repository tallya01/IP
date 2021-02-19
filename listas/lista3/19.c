#include <stdio.h>

int main() {
    char str[5001], init[101];
    int alit = 0, i, j, aux;

    while(scanf("%[^\n]%*c", str) != EOF) {
        for(i=0, j=0; str[i]!='\0'; i++){
            if(i==0){
                init[i] = str[i];
                j++;
            } 
            else{
                if(str[i-1]==32){
                    init[j]=str[i];
                    j++;
                } 
            }
        }
        init[j] = '\0';

        for(i=1, alit=0 ;init[i]!='\0';i++){
            if(init[i]==init[i-1] || init[i]==init[i-1]+32 || init[i]==init[i-1]-32){
                alit++;
                if(i>1 && init[i]==init[i-2] || init[i]==init[i-2] + 32 || init[i]==init[i-2] - 32) alit--;
            } 
        }

        printf("%d\n", alit);
    }

    return 0;
}