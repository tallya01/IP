#include <stdlib.h>
#include <stdio.h>

struct registro_curso{
    int cod;
    float valor;
    char curso[101];
};

typedef struct registro_curso cursos;

struct registro_aluno{
    char nome[501];
    int codigo;
    int n_creditos;
    float mensalidade;
};

typedef struct registro_aluno alunos;

int index_curso_aluno (cursos * c, alunos * a, int q1, int q2);

int main() {
    int i, quant, quant2;
    cursos * c = NULL;
    alunos * a = NULL;

    scanf("%d", &quant);

    c = (cursos *) calloc(quant, sizeof(cursos));

    for(i=0;i<quant;i++){
        scanf("%d", &c[i].cod);
        scanf("%f", &c[i].valor);
        scanf("%*c%[^\n]", &c[i].curso);
    }

    scanf("%d", &quant2);

    a = (alunos *) calloc(quant2, sizeof(alunos));

    for(i=0;i<quant2;i++){
        scanf("%*c%[^\n]", &a[i].nome);
        scanf("%d", &a[i].codigo);
        scanf("%d", &a[i].n_creditos); 
    }

    for(i=0;i<quant2;i++){
        a[i].mensalidade = a[i].n_creditos * c[index_curso_aluno(c, a, quant, i)].valor;
    }

    for(i=0;i<quant2;i++){
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n", a[i].nome, c[index_curso_aluno(c, a, quant, i)].curso, a[i].n_creditos, c[index_curso_aluno(c, a, quant, i)].valor, a[i].mensalidade);
    }

    free(c);
    free(a);

    return 0;
}

int index_curso_aluno (cursos * c, alunos * a, int q1, int i){
    int n;

    for(n=0;n<q1;n++){
        if(a[i].codigo==c[n].cod) return n;
    }
}