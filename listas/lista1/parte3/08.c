#include <stdio.h>

int main() {
    int pop_a, pop_b, anos;

    scanf("%d", &pop_a);
    scanf("%d", &pop_b);

    //tx_a = pop_a * 0.03;
    //tx_b = pop_b * 0.015;

    for(anos=0; pop_a<pop_b; anos++){
        pop_a *= 1.03;
        pop_b *= 1.015;
    }

    printf("ANOS = %d\n", anos);

    return 0;
}