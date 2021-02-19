#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int ordem;
    double * coef;
} poly;

poly * poly_new(int ord);
void poly_print (poly * p);
void poly_free (poly * p);
poly * poly_sum(poly * a, poly * b);
poly * poly_sub(poly * a, poly * b);
poly * poly_mult(poly * a, poly * b);

int main() {
    int n, i, j, ord;
    poly ** p;
    poly * soma;
    poly * sub;
    poly * mult;

    scanf("%d", &n);

    p = (poly **) malloc(n*sizeof(poly*));

    for(i=0;i<n;i++){
        scanf("%d", &ord);
        p[i] = poly_new(ord);
    }

    for(i=0;i<n-1;i++){
        soma = poly_sum(p[i], p[i+1]);
        sub = poly_sub(p[i], p[i+1]);
        mult = poly_mult(p[i], p[i+1]);
        printf("soma: ");
        poly_print(soma);
        printf("subtracao: ");
        poly_print(sub);
        printf("multiplicacao: ");
        poly_print(mult);
        free(soma);
        free(sub);
        free(mult);
    }

    for(i=0;i<n;i++){
        poly_free(p[i]);
    }

    free(p);

    return 0;
}

poly * poly_new(int ord){
    poly * p = malloc(sizeof(poly));
    int i;
    p->ordem = ord;
    p->coef = malloc((ord+1)*sizeof(double));
    for(i=ord;i>=0;i--){
        scanf("%lf", &p->coef[i]);
    }

    return p;
}

poly * poly_sum(poly * a, poly * b){
    poly * p = malloc(sizeof(poly));
    int i;
    if(a->ordem==b->ordem){
        p->ordem = a->ordem;
        p->coef = malloc((p->ordem+1)*sizeof(double));
        for(i=0;i<=p->ordem;i++){
            p->coef[i] = a->coef[i] + b->coef[i];
        }
        return p;
    }
    else{
        if(a->ordem > b->ordem){
            p->ordem = a->ordem;
            p->coef = malloc((p->ordem+1)*sizeof(double));
            for(i=0;i<=b->ordem;i++){
                p->coef[i] = a->coef[i]+b->coef[i];
            }
            for(i=b->ordem+1;i<=p->ordem;i++){
                p->coef[i] = a->coef[i];
            }
            return p;
        }
        else{
            p->ordem = b->ordem;
            p->coef = malloc((p->ordem+1)*sizeof(double));
            for(i=0;i<=a->ordem;i++){
                p->coef[i] = a->coef[i]+b->coef[i];
            }
            for(i=a->ordem+1;i<=p->ordem;i++){
                p->coef[i] = b->coef[i];
            }
            return p;
        }
    }
}

poly * poly_sub(poly * a, poly * b){
    poly * p = malloc(sizeof(poly));
    int i;
    if(a->ordem==b->ordem){
        p->ordem = a->ordem;
        p->coef = malloc((p->ordem+1)*sizeof(double));
        for(i=0;i<=p->ordem;i++){
            p->coef[i] = a->coef[i] - b->coef[i];
        }
        return p;
    }
    else{
        if(a->ordem > b->ordem){
            p->ordem = a->ordem;
            p->coef = malloc((p->ordem+1)*sizeof(double));
            for(i=0;i<=b->ordem;i++){
                p->coef[i] = a->coef[i]-b->coef[i];
            }
            for(i=b->ordem+1;i<=p->ordem;i++){
                p->coef[i] = a->coef[i];
            }
            return p;
        }
        else{
            p->ordem = b->ordem;
            p->coef = malloc((p->ordem+1)*sizeof(double));
            for(i=0;i<=a->ordem;i++){
                p->coef[i] = a->coef[i]-b->coef[i];
            }
            for(i=a->ordem+1;i<=p->ordem;i++){
                p->coef[i] = - b->coef[i];
            }
            return p;
        }
    }
}

poly * poly_mult(poly * a, poly * b){
    poly * p = malloc(sizeof(poly));
    int i, j, k;
    p->ordem = a->ordem + b->ordem;
    p->coef = malloc((p->ordem+1)*sizeof(double));
    for(i=0;i<=p->ordem;i++){
        p->coef[i] = 0;
    }
    for(i=0;i<p->ordem+1;i++){
        for(j=0;j<=p->ordem+1;j++){
            p->coef[i+j] += a->coef[i]*b->coef[j];
        }
    }
    return p;
}

void poly_print (poly * p){
    int i;
    for(i=p->ordem;i>=0;i--){
        if(p->coef[i]>=0) printf("+%.1lfx^%d", p->coef[i], i);
        else printf("%.1lfx^%d", p->coef[i], i);
    }
    printf("\n");
}

void poly_free (poly * p){
    int i;
    free(p->coef);
    free(p);
}