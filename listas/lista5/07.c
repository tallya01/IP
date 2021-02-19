#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Ponto4D{
    double u, x, y, z;
} ponto;

int main() {
    int n, i;
    double dist;
    ponto * p;

    scanf("%d", &n);

    p = (ponto*) calloc(n, sizeof(ponto));

    for(i=0;i<n;i++){
        scanf("%lf %lf %lf %lf", &p[i].u, &p[i].x, &p[i].y, &p[i].z);
    }

    for(i=0;i<n-1;i++){
        dist = sqrt(pow((p[i].u-p[i+1].u),2)+pow((p[i].x-p[i+1].x),2)+pow((p[i].y-p[i+1].y),2)+pow((p[i].z-p[i+1].z),2));
        printf("%.2lf\n", dist);
    }

    free(p);

    return 0;
}