#include <stdio.h>

int main() {
    int mat, horas;
    double val_h, sal;

    while(1){
        scanf("%d %d %lf", &mat, &horas, &val_h);
        getchar();
        if(mat==0||horas==0||val_h==0.0) break;
        sal = horas * val_h;
        printf("%d %.2lf\n", mat, sal);
    }
    return 0;
}