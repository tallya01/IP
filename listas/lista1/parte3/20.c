#include <stdio.h>

int main() {
    int m, n, cont1, cont2;

    scanf("%d", &m);
    scanf("%d", &n);

    for(cont1=2; cont1<=m; cont1++){
        for(cont2 = 1; cont2<=n; cont2++){
            if(cont2 == cont1) break;
            printf("(%d,%d)", cont1, cont2);
            if(cont2 < cont1 - 1 && cont2 < n) printf("-");
        }
        printf("\n");
    }

    return 0;
}