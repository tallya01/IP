#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "complex.h"

int main(int argc, char * argv[]){
    FILE * in1, * in2, * out;
    char form[2];
    complex_alg * c1, * c2, * res;

    if(argc != 4){
        printf("Entrada: ./cpbuild <arq_complex_1> <arq_complex_2> <arq_saida>\n\n");
        printf("<arq_complex_1>:\n\t nome do arquivo contendo o primeiro numero complexo\n\n");
        printf("<arq_complex_2>:\n\t nome do arquivo contendo o segundo numero complexo\n\n");
        printf("<arq_saida>:\n\t nome_do_arquivo\n");
        return 0;
    }

    in1 = fopen(argv[1], "rb");
    if(in1==NULL){
        printf("Erro: nao foi possivel abrir o primeiro arquivo!\n");
        return 0;
    }

    in2 = fopen(argv[2], "rb");
    if(in2==NULL){
        printf("Erro: nao foi possivel abrir o segundo arquivo!\n");
        fclose(in1);
        return 0;
    }

    fread(form, sizeof(char), 2, in1);
    if(strcmp(form, "CP")!=0){
        printf("Erro: formato do primeiro arquivo incorreto!\n");
        fclose(in1);
        fclose(in2);
        return 0;
    }

    fread(form, sizeof(char), 2, in2);
    if(strcmp(form, "CP")!=0){
        printf("Erro: formato do segundo arquivo incorreto!\n");
        fclose(in1);
        fclose(in2);
        return 0;
    }

    c1 = malloc(sizeof(complex_alg));
    c2 = malloc(sizeof(complex_alg));
    res = malloc(sizeof(complex_alg));

    fread(&(c1->real), sizeof(double), 1, in1);
    fread(&(c1->img), sizeof(double), 1, in1);
    fread(&(c2->real), sizeof(double), 1, in2);
    fread(&(c2->img), sizeof(double), 1, in2);

    res->real = c1->real + c2->real;
    res->img = c1->img + c2->img;

    out = fopen(argv[3], "wb");

    fwrite("CP", sizeof(char), 2, out);
    fwrite(&(res->real), sizeof(double), 1, out);
    fwrite(&(res->img), sizeof(double), 1, out);

    fclose(out);
    fclose(in2);
    fclose(in1);
    free(c1);
    free(c2);
    free(res);

    return 0;
}