#include <stdio.h>

int main() {
    double valorIngresso, valorInicial, valorFinal, lucro, lucro_ant = 0, val, melhor_vf, melhor_l;
    int numIngressos, melhor_ni;

    scanf("%lf", &valorIngresso);
    scanf("%lf", &valorInicial);
    scanf("%lf", &valorFinal);

    if(valorInicial >= valorFinal) printf("INTERVALO INVALIDO\n");
    else {
        for(val = valorInicial; val<=valorFinal; val++){
            if(val < valorIngresso){
                numIngressos = 120 + ((valorIngresso - val)/0.5) * 25;
                lucro = (numIngressos * val) - (200 + 0.05 * numIngressos);
                printf("V: %.2lf, N: %d, L: %.2lf\n", val, numIngressos, lucro);
                if(lucro > lucro_ant){
                    melhor_l = lucro;
                    melhor_vf = val;
                    melhor_ni = numIngressos;
                }
                lucro_ant = lucro;
            }
            else{
                numIngressos = 120 - ((val - valorIngresso)/0.5) * 30;
                lucro = (numIngressos * val) - (200 + 0.05 * numIngressos);
                printf("V: %.2lf, N: %d, L: %.2lf\n", val, numIngressos, lucro);
                if(lucro > lucro_ant){
                    melhor_l = lucro;
                    melhor_vf = val;
                    melhor_ni = numIngressos;
                }
                lucro_ant = lucro;
            }
        }
        
        if(melhor_l <= 0){
            melhor_l = 0;
            melhor_ni = 0;
            melhor_vf = 0;
        }
        printf("Melhor valor final: %.2lf\n", melhor_vf);
        printf("Lucro: %.2lf\n", melhor_l);
        printf("Numero de ingressos: %d\n", melhor_ni);
    }

    return 0;
}