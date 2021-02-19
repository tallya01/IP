#include <stdio.h>

int main() {
    int ta, tb, i, j, k, aux, qtdu=0, repet=0, intersec=0;

    scanf("%d", &ta);

    while(ta<=0 || ta>100){
        scanf("%d", &ta);
    }

    scanf("%d", &tb);

    while(tb<=0 || tb>100){
        scanf("%d", &tb);
    }

    int a[ta], b[tb], u[ta+tb];

    for(i=0;i<ta;i++){
        scanf("%d", &a[i]);
        for(j=0;j<i;j++){
            if(a[i]==a[j]) i--;
        }
    }

    for(i=0;i<tb;i++){
        scanf("%d", &b[i]);
        for(j=0;j<i;j++){
            if(b[i]==b[j]) i--;
        }
    }

    for(i=0;i<ta;i++){
        u[i]=a[i];
    }
    for(i=ta,j=0;i<ta+tb;i++,j++){
        u[i] = b[j];
    }

    for(i=0;i<ta+tb;i++){
        for(j=0;j<ta+tb;j++){
            if(u[i]==u[j] && i<j) repet++; 
        }
        qtdu++;
    }

    qtdu -= repet;

    for(i=0;i<ta+tb;i++){
        for(j=0;j<ta+tb;j++){
            if(u[i]==u[j] && i<j) intersec++; 
        }
    }

    printf("(");

    for(i=0,k=0;i<ta+tb;i++){
        aux=0;
        for(j=0;j<ta+tb;j++){
            if(u[i]==u[j] && i>j) aux=1;
        }
        if(aux==0){
            printf("%d", u[i]);
            if(k<qtdu-1){
            printf(",");
            k++;
            } 
        } 
    }

    printf(")");
    printf("\n");

    printf("(");

    for(i=0,k=0;i<ta+tb;i++){
        aux=0;
        for(j=ta;j<ta+tb;j++){
            if(u[i]==u[j]) aux=1;
        }
        if(aux==1 && i<ta) printf("%d", u[i]);
        if(k<intersec-1){
            printf(",");
            k++;
        }
    }

    printf(")");
    printf("\n");

    return 0;
}