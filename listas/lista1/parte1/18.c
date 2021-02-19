#include <stdio.h>

int main() {
    float a, b, c, d, e, f, x, y, det, det_x, det_y;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);

    det = (a * e) - (b* d);

    det_x = (c * e) - (b * f);

    det_y = (a * f) - (c * d);

    x = det_x / det;
    y = det_y / det;

    printf("O VALOR DE X E = %.2f\n", x);
    printf("O VALOR DE Y E = %.2f\n", y);

    return 0;
}