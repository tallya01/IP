#include <stdio.h>

int main() {
    float a, b, c, mod_bc, mod_ac, mod_ab;

    scanf("%f %f %f", &a, &b, &c);

    mod_bc = (b-c) < 0 ? -(b-c) : (b-c);
    mod_ac = (a-c) < 0 ? -(a-c) : (a-c);
    mod_ab = (a-b) < 0 ? -(a-b) : (a-b);

    if((mod_bc < a && a < (b+c)) && (mod_ac < b && a < (a+c)) && (mod_ab < a && c < (a+b))){
        float perimetro;
        perimetro = a + b + c;
        printf("Perimetro = %.1f\n", perimetro);
    }
    else{
        float area;
        area = (a+b) * c / 2;
        printf("Area = %.1f\n", area);
    }

    return 0;
}