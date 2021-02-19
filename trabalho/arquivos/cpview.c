#include <stdio.h>
#include "complex.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    FILE * arq;
    complex * c;
    complex_polar * cp;
    complex_geo * cg;
    complex_alg * ca;

    if(argc != 3){
        printf("Entrada: ./cpbuild [OPCAO] <nome_arq>\n\n");
        printf("OPCAO:\n \t -a \t forma algebrica\n \t -p \t forma polar/trigonometrica\n \t -v \t forma vetorial/trigonometrica\n\n");
        printf("<nome_arq>:\n \t nome_do_arquivo\n");
        return 0;
    }

    if(strcmp(argv[1], "-a")==0){
        arq = fopen(argv[2], "rb");
        if(arq == NULL){
            printf("Erro: não foi possível abrir o arquivo!\n");
            return 0;
        }
        c = malloc(sizeof(complex));
        fread(c->code, sizeof(char), 2, arq);
        if(strcmp(c->code, "CP")!=0){
            printf("Erro: formato de arquivo inválido!\n");
            free(c);
            fclose(arq);
            return 0;
        }
        fread(&c->real, sizeof(double), 1, arq);
        fread(&c->img, sizeof(double), 1, arq);
        print_complex_alg(c->real, c->img);
        free(c);
        fclose(arq);     
    }
    else if(strcmp(argv[1], "-p")==0){
        arq = fopen(argv[2], "rb");
        if(arq == NULL){
            printf("Erro: não foi possível abrir o arquivo!\n");
            return 0;
        }
        c = malloc(sizeof(complex));
        fread(c->code, sizeof(char), 2, arq);
        if(strcmp(c->code, "CP")!=0){
            printf("Erro: formato de arquivo inválido!\n");
            free(c);
            fclose(arq);
            return 0;
        }
        fread(&c->real, sizeof(double), 1, arq);
        fread(&c->img, sizeof(double), 1, arq);
        cp = convert_alg_to_polar(c->real, c->img);
        print_complex_polar(cp->r, cp->theta);
        free(c);
        free(cp);
        fclose(arq);
    }
    else if(strcmp(argv[1], "-v")==0){
        arq = fopen(argv[2], "rb");
        if(arq == NULL){
            printf("Erro: não foi possível abrir o arquivo!\n");
            return 0;
        }
        c = malloc(sizeof(complex));
        fread(c->code, sizeof(char), 2, arq);
        if(strcmp(c->code, "CP")!=0){
            printf("Erro: formato de arquivo inválido!\n");
            free(c);
            fclose(arq);
            return 0;
        }
        fread(&c->real, sizeof(double), 1, arq);
        fread(&c->img, sizeof(double), 1, arq);
        cg = convert_alg_to_geo(c->real, c->img);
        print_complex_geo(cg->a, cg->b);
        free(c);
        free(cg);
        fclose(arq);
    }
    else{
        printf("Erro: opcao invalida!\n");
        return 0;
    }

    return 0;
}