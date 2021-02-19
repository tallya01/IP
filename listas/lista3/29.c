#include <stdio.h>

int main() {
    int d, n, aux, i, j;
    char num[100001];

    while(1){
        scanf("%d %d", &d, &n);
        if(d==0 && n==0) break;
        char ord[d+1];
        scanf("%*c%[^\n]", num);
        for(i=0;num[i]!='\0';i++){
            aux=0;
            for(j=0;num[j]!='\0';j++){
                if(num[i]<num[j]) aux++;
                if(num[i]==num[j] && i<j) aux++;
            }
            ord[aux]=num[i];
        }
        ord[i]='\0';
        for(i=d-1;i>=0;i--){
            for(j=0;num[j]!='\0';j++){
                if(num[j]=='0' && num[j+1]=='\0' && num[j-1]=='9') break;
                if(ord[i]==num[j]){
                    num[j] = 'x';
                    d--;
                }
                if(d==n) break;
            }
            if(d==n) break;
        }

        for(i=0;num[i]!='\0';i++){
            if(num[i]!='x') printf("%c", num[i]);
        }
        printf("\n");
    }

    return 0;
}