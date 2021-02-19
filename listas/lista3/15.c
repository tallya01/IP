#include <stdio.h>

int main(){
    int t, n, i, j, k;
    int dif, menorDif, comp;

    scanf("%d", &t);

    for(i=0;i<t;i++){
        scanf("%d", &n);
        int v[n];
        for(j=0;j<n;j++){
            scanf("%d", &v[j]);
        }
        comp=0;
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                if(v[j]>v[k]){
                    if(j==0 && k==1) dif=menorDif=v[j]-v[k];
                    else if(j!=k){
                        dif=v[j]-v[k];
                        if(dif<menorDif) menorDif = dif;
                    }
                }
                else{
                    if(j==0 && k==1) dif=menorDif=v[k]-v[j];
                    else if(j!=k){
                        dif=v[k]-v[j];
                        if(dif<menorDif) menorDif = dif;
                    }
                }
                //printf("%d\n", menorDif);
                comp++;
            }
        }

        printf("%d %d\n", menorDif, comp);
    }

    return 0;
}