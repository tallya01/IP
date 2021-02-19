#include <stdio.h>

int main() {
    int t, v[9], ord[9], i, j, k, l, m, soma, aux;

    scanf("%d", &t);

    for(i=0;i<t;i++){
        for(j=0;j<9;j++) scanf("%d", &v[j]);

        for(j=0;j<8;j++){
            for(k=j+1;k<9;k++){
                soma=0;
                for(l=0;l<9;l++){
                    if(l!=j && l!=k) soma += v[l];
                }
                if(soma==100) break;
            }
            if(soma==100) break;
        }

        for(l=0;l<9;l++){
            aux=0;
            for(m=0;m<9;m++){
                if(v[l]<v[m]) aux++;
                if(v[l]==v[m] && l<m) aux++;
            }
            ord[aux] = v[l];
        }

        for(l=8;l>=0;l--){
            if(ord[l]!=v[j]&&ord[l]!=v[k]) printf("%d\n", ord[l]);
        }
    }

    return 0;
}