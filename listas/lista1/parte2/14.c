#include <stdio.h>

int main() {
    int data, dia, mes, ano;

    scanf("%d", &data);

    dia = data / 1000000;
    mes = (data / 10000) - (dia * 100);
    ano = data - (dia * 1000000) - (mes * 10000);

    if(dia <= 0 || mes <= 0 || ano <=0) printf("Data invalida!\n");
    else if(dia > 31 || mes > 12) printf("Data invalida!\n");
    else if(dia > 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 10)) printf("Data invalida!\n");
    else if(dia > 28 && mes == 2) printf("Data invalida!\n");
    else {
        switch(mes) {
            case 1: {
                printf("%d de janeiro de %d\n", dia, ano);
                break; 
            }
            case 2: {
                printf("%d de fevereiro de %d\n", dia, ano);
                break;
            }
            case 3: {
                printf("%d de março de %d\n", dia, ano);
                break;
            }
            case 4: {
                printf("%d de abril de %d\n", dia, ano);
                break;
            }    
            case 5: {
                printf("%d de maio de %d\n", dia, ano);
                break;
            }
            case 6: {
                printf("%d de junho de %d\n", dia, ano);
                break;
            }
            case 7: {
                printf("%d de julho de %d\n", dia, ano);
                break;
            }    
            case 8: {
                printf("%d de agosto de %d\n", dia, ano);
                break;
            }
            case 9: {
                printf("%d de setembro de %d\n", dia, ano);
                break;
            }
            case 10: {
                printf("%d de outubro de %d\n", dia, ano);
                break;
            }
            case 11: {
                printf("%d de novembro de %d\n", dia, ano);
                break;
            }
            case 12: {
                printf("%d de dezembro de %d\n", dia, ano);
                break;
            }    
        }
    }

    
    return 0;

}