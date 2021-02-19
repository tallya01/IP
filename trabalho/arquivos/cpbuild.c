#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "complex.h"

int main(int argc, char * argv[]){
    FILE * arq;
    char * ptr, * ptr2;
    complex * c;
    complex_alg * ca;
    complex_geo * cg;
    complex_polar * cp;

    if(argc != 4){
        printf("Entrada: ./cpbuild [OPCAO] <string_num_complexo> <nome_arq_saida>\n\n");
        printf("OPCAO:\n \t -a \t forma algebrica\n \t -p \t forma polar/trigonometrica\n \t -v \t forma vetorial/trigonometrica\n\n");
        printf("<string_num_complexo>:\n \t a+bi    para forma algebrica\n \t r;theta para forma polar/trigonometrica\n \t [a,b]   para forma vetorial/ometrica\n\n");
        printf("<nome_arq_saida>:\n \t nome_do_arquivo\n");
        return 0;
    }

    if(strcmp(argv[1], "-a")==0){
        if(verifica_formato_alg(argv[2])==0){
            printf("Erro: formato do numero complexo incorreto!\n");
            return 0;
        }
        ca = malloc(sizeof(complex_alg));
        arq = fopen(argv[3], "wb");

        ca->real = strtod(argv[2], &ptr);
        ca->img = strtod(ptr++, &ptr2);

        fwrite("CP", sizeof(char), 2, arq);
        fwrite(&(ca->real), sizeof(double), 1, arq);
        fwrite(&(ca->img), sizeof(double), 1, arq);

        fclose(arq);
        free(ca);
    }
    else if(strcmp(argv[1], "-p")==0){
        if(verifica_formato_polar(argv[2])==0){
            printf("Erro: formato do numero complexo incorreto!\n");
            return 0;
        }
        cp = malloc(sizeof(complex_polar));
        cp->r = strtod(argv[2], &ptr);
        cp->theta = strtod(ptr+1, &ptr2);

        ca = convert_polar_to_alg(cp->r, cp->theta);

        arq = fopen(argv[3], "wb");
        fwrite("CP", sizeof(char), 2, arq);
        fwrite(&(ca->real), sizeof(double), 1, arq);
        fwrite(&(ca->img), sizeof(double), 1, arq);

        fclose(arq);
        free(cp);
        free(ca);
    }
    else if(strcmp(argv[1], "-v")==0){
        if(verifica_formato_geo(argv[2])==0){
            printf("Erro: formato do numero complexo incorreto!\n");
            return 0;
        }

        cg = malloc(sizeof(complex_polar));
        sscanf(argv[2], "[%lf,%lf]", &(cg->a), &(cg->b));

        ca = convert_geo_to_alg(cg->a, cg->b);

        arq = fopen(argv[3], "wb");
        fwrite("CP", sizeof(char), 2, arq);
        fwrite(&(ca->real), sizeof(double), 1, arq);
        fwrite(&(ca->img), sizeof(double), 1, arq);

        fclose(arq);
        free(cg);
        free(ca);
    }
    else{
        printf("Erro: opcao invalida!\n");
        return 0;
    }

    return 0;
}