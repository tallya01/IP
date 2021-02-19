#include <stdio.h>
#include <string.h>

void printSeq(int n1, int n2);
int sizeNum(int n);

int main(){
    int c, i, n1, n2;

    scanf("%d", &c);

    for(i=0; i<c; i++){
        scanf("%d %d", &n1, &n2);
        printSeq(n1, n2);
    }

    return 0;
}

void printSeq(int n1, int n2){
    int i, nDig = 0;
    char num[6];

    for(i=n1; i<=n2; i++){
        nDig += sizeNum(i);
    }

    char str[nDig];
    sprintf(str, "%d", n1);

    for(i=n1+1; i<=n2; i++){
        sprintf(num, "%d", i);
        strcat(str, num);
    }

    for(i=0; i<nDig; i++){
        printf("%c", str[i]);
    }
    for(i=nDig-1; i>=0; i--){
        printf("%c", str[i]);
    }
    printf("\n");
}

int sizeNum(int n){
    if(n<10) return 1;
    else if(n<100) return 2;
    else if(n<1000) return 3;
    else if(n<10000) return 4;
    else return 5;
}