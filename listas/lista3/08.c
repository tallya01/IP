#include <stdio.h>

int main() {
    int m, n, s, i, aux=1;
    int a[9];

    while(1){
        scanf("%d %d", &m, &n);
        if(m==0 && n==0) break;
        s = m+n;
        aux=1;
        for(i=0; i<9; i++){
            a[i] = (s/aux)%10;
            aux *= 10;
        }
        for(i=8; i>=0; i--){
            if(a[i]!=0) printf("%d", a[i]);
        }
        printf("\n");
    }

    return 0;
}