#include <stdio.h>

int main() {
    int n, i, j, maiorFreq;
    char str[200];
    int letras[123] = {0};

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%*c%[^\n]", str);
        maiorFreq = 0;
        for(j=0;j<123;j++){
            letras[j] = 0;
        }
        for(j=0;j<200, str[j]!='\0';j++){
            if(str[j]>='A' && str[j]<='Z' || str[j]>='a' && str[j]<='z') letras[(int)str[j]]++;
        }
        for(j=97;j<123;j++){
            letras[j] += letras[j-32];
        }
        for(j=0;j<123;j++){
            if((int)letras[j]>maiorFreq) maiorFreq = (int)letras[j];
        }
        for(j=97;j<123;j++){
            if((int)letras[j]==maiorFreq){
                printf("%c", (char)j);
            }
        }
        printf("\n");
    }

    return 0;
}