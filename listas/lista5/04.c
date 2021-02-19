#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct vetor{
    double u ,x ,y ,z, norma;
};

typedef struct vetor vet;

void swap(vet * v, int i1, int i2);

int main() {
    int i, j, n, menor;
    vet * v = NULL;

    scanf("%d", &n);

    v = (vet *) calloc(n, sizeof(vet));

    for(i=0;i<n;i++) scanf("%lf %lf %lf %lf", &v[i].u, &v[i].x, &v[i].y, &v[i].z);

    for(i=0;i<n;i++) v[i].norma = sqrt(pow(v[i].u,2)+pow(v[i].x,2)+pow(v[i].y,2)+pow(v[i].z,2));

    for(i=0;i<n-1;i++){
        menor = i;
        for(j=i+1;j<n;j++){
            if(v[j].norma < v[i].norma){
                menor = j;
                swap(v, i, menor);
            } 
        }
    }

    for(i=0;i<n;i++) printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", v[i].u, v[i].x, v[i].y, v[i].z, v[i].norma);

    free(v);

    return 0;
}

void swap(vet * v, int i1, int i2){
    double aux;
    aux = v[i1].norma;
    v[i1].norma = v[i2].norma;
    v[i2].norma = aux;

    aux = v[i1].u;
    v[i1].u = v[i2].u;
    v[i2].u = aux;

    aux = v[i1].x;
    v[i1].x = v[i2].x;
    v[i2].x = aux;

    aux = v[i1].y;
    v[i1].y = v[i2].y;
    v[i2].y = aux;

    aux = v[i1].z;
    v[i1].z = v[i2].z;
    v[i2].z = aux;
}