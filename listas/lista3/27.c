#include <stdio.h>

int main() {
    int n, maior, i, j;
    double x, y, z;

    scanf("%d", &n);

    double M[n][3];

    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            scanf("%lf", &M[i][j]);
        }
    }

    for(i=1;i<n;i++){
        x = M[i][0] - M[i-1][0];
        y = M[i][1] - M[i-1][1];
        z = M[i][2] - M[i-1][2];

        if(x<0) x = (-x);
        if(y<0) y = (-y);
        if(z<0) z = (-z);

        if(x>y && x>z || x==y && x>z || x==z && x>y) printf("%.2lf\n", x);
        else if(y>x && y>z || y==x && y>z || y==z && y>x) printf("%.2lf\n", y);
        else if(z>y && z>x || z==x && z>y || z==y && z>x) printf("%.2lf\n", z);
    }

    return 0;
}