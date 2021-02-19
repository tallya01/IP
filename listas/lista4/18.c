#include <stdio.h>

int main(){
    int n, i, j, k, l, menor, aux, freq;

    scanf("%d", &n);

    int m[n][n], ord[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++) scanf("%d", &m[i][j]);
    }

    for(j=0;j<n;j++){
        menor = m[0][j];
        for(i=0;i<n;i++){
            if(m[i][j]<menor) menor=m[i][j];
        }
        ord[0][j] = menor;

        l=1;
        freq=0;
        for(i=0;i<n;i++){
            if(m[i][j]==menor) freq++;
        }
        while(freq>1){
            ord[l][j]=menor;
            l++;
            freq--;
        }

        for(k=l;k<n;k++){
            for(i=0;i<n;i++){
                if(m[i][j]>menor){
                    aux=m[i][j];
                    break;
                } 
            }
            for(i=0;i<n;i++){
                if(m[i][j]>menor && m[i][j]<aux) aux=m[i][j]; 
            }
            menor = aux;
            ord[k][j] = menor;
            freq=0;
            for(i=0;i<n;i++){
                if(m[i][j]==menor) freq++;
            }
            while(freq>1 && k<n){
                k++;
                ord[k][j]=menor;
                freq--;
            }
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d", ord[i][j]);
            if(j!=n-1) printf(" ");
        } 
        printf("\n");
    }

    return 0;
}