#include <stdio.h>

int main() {
    int dim1, dim2, i, j, k, l, aux, aux2, aux3;

    scanf("%d", & dim1);

    int A[dim1][dim1];

    for(i=0;i<dim1;i++){
        for(j=0;j<dim1;j++){
            scanf("%d", &A[i][j]);
        }
    }
    
    scanf("%d", & dim2);

    int B[dim2][dim2];

    for(i=0;i<dim2;i++){
        for(j=0;j<dim2;j++){
            scanf("%d", &B[i][j]);
        }
    }

    for(i=0, k=0, l=0;i<=dim2-dim1;i++){
        if(aux==dim1*dim1) break;
        aux=0;
        k=l=0;
        for(j=0; j<dim2;j++){
            if(B[i][j]==A[k][l]){
                if(k==0 && l==0){
                    aux2=i;
                    aux3=j;
                }
                aux++;
                l++;
                if(l==dim1){
                    l=0;
                    k++;
                    i++;
                    j=aux3-1;
                }
                if(k==dim1){
                    i=aux2;
                    j=aux3+1;
                    break;
                }
            }
            else{
                aux=k=l=0;
            }
        }
    }

    if(aux==dim1*dim1) printf("sim\n");
    else printf("nao\n");

    return 0;
}