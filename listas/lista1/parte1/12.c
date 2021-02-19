#include <stdio.h>

int main() {
    double massa_ton, massa_kg, ac, tempo, vel_ms, vel_kmh, espaco, trab;

    scanf("%lf", &massa_ton);
    scanf("%lf", &ac);
    scanf("%lf", &tempo);

    massa_kg = 1000 * massa_ton;
    vel_ms = ac * tempo;
    vel_kmh = vel_ms * 3.6;
    espaco = (ac * tempo * tempo) / 2;
    trab = (massa_kg * vel_ms * vel_ms) / 2;

    printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf\n", vel_kmh, espaco, trab);

    return 0;
}