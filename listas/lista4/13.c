#include <stdio.h>

int main() {
    int dim, backGr, centerX, centerY, border, radius, color, i, j;

    scanf("%d %d", &dim, &backGr);

    int img[dim][dim];

    for(i=0;i<dim;i++){
        for(j=0;j<dim;j++){
            img[i][j] = backGr; 
        }
    }

    while(1){
        scanf("%d %d", &centerY, &centerX);
        if(centerX ==-1 && centerY == -1) break;
        scanf("%d %d %d", &color, &radius, &border);
        if(centerX-radius<0 || centerX+radius>=dim || centerY-radius<0 || centerY+radius>=dim) continue;
        if(border==1){
            for(i=centerX-radius;i<=centerX+radius;i++){
                for(j=centerY-radius;j<=centerY+radius;j++){
                    if(i==centerX-radius || i==centerX+radius) img[i][j] = color;
                    if(j==centerY-radius || j==centerY+radius) img[i][j] = color;
                }
            }
        }
        else{
            for(i=centerX-radius;i<=centerX+radius;i++){
                for(j=centerY-radius;j<=centerY+radius;j++){
                    img[i][j] = color;
                }
            }
        }
    }

    printf("P2\n");
    printf("%d %d\n", dim, dim);
    printf("255\n");

    for(i=0;i<dim;i++){
        for(j=0;j<dim;j++){
            printf("%d", img[i][j]);
            if(j!=dim-1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}