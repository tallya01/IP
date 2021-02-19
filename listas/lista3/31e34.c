#include <stdio.h>

int main() {
    int n, maior, i, j;

    while(1){
        scanf("%d", &n);
        if(n==0) break;

        int v[n];

        for(i=0;i<n;i++){
            scanf("%d", &v[i]);
        }

        maior=v[0];

        for(i=0;i<n;i++){
            if(v[i]>maior) maior=v[i];
        }

        int vOrd[n], vCount[maior+1];

        for(i=0;i<maior+1;i++){
            vCount[i] = 0;
        }

        for(i=0;i<n;i++){
            vCount[v[i]]++;
        }

        i=j=0;
        while(i<=maior){
            if(vCount[i]==0){
                i++;
                continue;
            }
            else{
                vOrd[j] = i;
                j++;
                vCount[i]--;
            }
        }

        for(i=0;i<n;i++){
            v[i]=vOrd[i];
        }
        for(i=0;i<n;i++){
            printf("%d", v[i]);
            if(i!=n-1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}