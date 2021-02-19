#include <stdio.h>

int main() {
    int n, i, k, maior = 0;

    scanf("%d", &n);

    int v[n], q[101] = {0};

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
        q[v[i]]++;
    }

    for(i=0; i<=100; i++){
        if(q[i]>maior){
            maior = q[i];
            k=i;
        }
        if(q[i]==maior){
            if(i>k) continue;
        } 
    }

    printf("%d\n", k);
    printf("%d\n", maior);

    return 0;
}