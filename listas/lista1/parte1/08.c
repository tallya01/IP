#include <stdio.h>

int main() {
    int t_horas, t_minutos, t_segundos, segundos;

    scanf("%d", &t_horas);
    scanf("%d", &t_minutos);
    scanf("%d", &t_segundos);

    segundos = (t_horas * 3600) + (t_minutos * 60) + t_segundos;

    printf("O TEMPO EM SEGUNDOS E = %d\n", segundos);

    return 0;
}