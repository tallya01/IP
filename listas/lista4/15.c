#include <stdio.h>

void direita(int ri, int ci, int cf, int m[10][10]);
void desce(int cf, int ri, int rf, int m[10][10]);
void esquerda(int rf, int cf, int ci, int m[10][10]);
void sobe(int rf, int ri, int ci, int m[10][10]);

int main() {
    int rows, cols, ri, rf, ci, cf, horiz=0, vert=0;
    int m[10][10];

    scanf("%d %d", &rows, &cols);

    if(rows<=0||rows>10||cols<=0||cols>10){
        printf("Dimensao invalida\n");
        return 0;
    }

    for(ri=0;ri<rows;ri++){
        for(ci=0;ci<cols;ci++) scanf("%d", &m[ri][ci]);
    }

    ri=ci=0; //linha e coluna inicial para impressão
    rf=rows-1; //linha final para impressão
    cf=cols-1; //coluna final para impressão

    //horiz conta as "passadas" horizontais e vert as verticais

    while(horiz<rows && vert<cols){
        direita(ri, ci, cf, m);
        horiz++;
        ri++;
        if(horiz==rows) break;
        printf(" ");
        desce(cf, ri, rf, m);
        vert++;
        cf--;
        if(vert==cols) break;
        printf(" ");
        esquerda(rf, cf, ci, m);
        horiz++;
        rf--;
        if(horiz==rows) break;
        printf(" ");
        sobe(rf, ri, ci, m);
        vert++;
        ci++;
        if(vert==cols) break;
        printf(" ");
    }

    printf("\n");

    return 0;
}

void direita(int ri, int ci, int cf, int m[10][10]){
    int i;

    for(i=ci;i<=cf;i++){
        printf("%d", m[ri][i]);
        if(i!=cf) printf(" ");
    }
}   

void desce(int cf, int ri, int rf, int m[10][10]){
    int i;

    for(i=ri;i<=rf;i++){
        printf("%d", m[i][cf]);
        if(i!=rf) printf(" ");
    }
}

void esquerda(int rf, int cf, int ci, int m[10][10]){
    int i;

    for(i=cf;i>=ci;i--){
        printf("%d", m[rf][i]);
        if(i!=ci) printf(" ");
    }
}

void sobe(int rf, int ri, int ci, int m[10][10]){
    int i;

    for(i=rf;i>=ri;i--){
        printf("%d", m[i][ci]);
        if(i!=ri) printf(" ");
    }
}