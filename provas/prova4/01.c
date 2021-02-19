#include <stdio.h>
#include <stdlib.h>

typedef struct interacoes{
    int likes, rts, mencoes;
} info;

int main() {
    int dim, n, i, j, l, c;
    int tl, tr, tm;
    info ** mat;

    scanf("%d", &dim);

    mat = (info**) calloc(dim, sizeof(info*));
    if(mat==NULL){
        free(mat);
        return 0;
    }
    for(i=0;i<dim;i++){
        mat[i] = (info*) calloc(dim, sizeof(info));
        if(mat[i]==NULL){
            for(j=0;j<=i;j++){
                free(mat[i]);
            }
            return 0;
        }
    }

    //for(i=0;i<dim;i++){
    //    for(j=0;j<dim;j++){
    //        mat[i][j].likes = NULL;
    //        mat[i][j].mencoes = NULL;
    //        mat[i][j].rts = NULL;
    //    }
    //}

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d %d", &l, &c);
        scanf("%d %d %d", &mat[l][c].likes, &mat[l][c].rts, &mat[l][c].mencoes);
    }

    for(i=0;i<dim;i++){
        tl=tr=tm=0;
        for(j=0;j<dim;j++){
            if(mat[i][j].likes==0 && mat[i][j].rts==0 && mat[i][j].mencoes==0) continue;
            if(mat[i][j].likes!=0) tl += mat[i][j].likes;
            if(mat[i][j].rts!=0) tr += mat[i][j].rts;
            if(mat[i][j].mencoes!=0) tm += mat[i][j].mencoes;
        }
        if(tl!=0 && tr!=0 && tm!=0){
            printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", i, tl, tr, tm);
        }
    }

    //for(i=0;i<dim;i++){
    //    for(j=0;j<dim;j++){
    //        printf("%d, %d, %d\n", mat[i][j].likes, mat[i][j].rts, mat[i]//[j].mencoes);
    //    }
    //}

    for(i=0;i<dim;i++){
        free(mat[i]);
    }
    free(mat);

    return 0;
}