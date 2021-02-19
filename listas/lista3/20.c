#include <stdio.h>

int main() {
    int n, k, i, pres=0;

    scanf("%d %d", &n, &k);

    int a[n];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]<=0) pres++;
    }
    if(pres<k) printf("SIM\n");
    else{
        printf("NAO\n");
        for(i=n-1; i>=0; i--){
            if(a[i]<=0) printf("%d\n", i+1);
        }
    }

    return 0;
}