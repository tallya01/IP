#include <stdio.h>
#include <math.h>

int fimTexto(char * texto);

int main() {
    int n, i, j, end;
    char texto[1000];

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%*c");
        scanf("%[^\n]", texto);
        end = fimTexto(texto);
        for(j=0; j<end; j++){
            if((int)texto[j]>=65 && (int)texto[j]<=90 || (int)texto[j]>=97 && (int)texto[j]<=122) texto[j] = (int)texto[j] + 3;
        }
        for(j=0; j<=ceil((end-1)/2); j++){
            texto[j] = (int)texto[j] - 1;
        }
        for(j=end-1; j>=0; j--){
            printf("%c", texto[j]);
        }
        printf("\n");
    }

    return 0;
}

int fimTexto(char * texto){
    int i=0;
    while(1){
        if(texto[i]=='\0') return i;
        i++;
    }
}