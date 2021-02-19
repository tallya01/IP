#include <math.h>
#include <stdlib.h>
#include "complex.h"
#include <stdio.h>

complex_geo * convert_alg_to_geo(double real, double img){
    complex_geo * c = malloc(sizeof(complex_geo));
    c->a = real;
    c->b = img;

    return c; 
}

complex_polar * convert_alg_to_polar(double real, double img){
    complex_polar * c = malloc(sizeof(complex_polar));
    c->r = sqrt(pow(real,2)+pow(img,2));
    c->theta = convert_rad_to_degrees(atan2(img, real));

    return c;
}

complex_alg * convert_geo_to_alg(double a, double b){
    complex_alg * c = malloc(sizeof(complex_alg));
    c->real = a;
    c->img = b;

    return c;
}

complex_alg * convert_polar_to_alg(double r, double theta){
    complex_alg * c = malloc(sizeof(complex_alg));

    c->real = r*cos(convert_degrees_to_rad(theta));
    c->img = r*sin(convert_degrees_to_rad(theta));

    return c;
}

double convert_degrees_to_rad(double angle){
    double rad;
    rad = angle * M_PI/180;

    return rad;
}

double convert_rad_to_degrees(double angle){
    double deg;
    deg = 180 * angle / M_PI;

    return deg;
}

int verifica_formato_alg(char * comp){
    int i, aux=0;
    for(i=0;comp[i]!='\0';i++){
        if(comp[i+1]=='\0' && comp[i]!='i') return 0; //verifica se o último caractere é a letra 'i'
        if(comp[i+1]!='\0' && comp[i]=='i') return 0; //verifica se a letra i aparece na posição errada
        if(comp[i]=='+' || comp[i]=='-') aux=1; //verifica se o caractere '+' aparece na string
        if(!(comp[i]>=48 && comp[i]<=57 || comp[i]=='+' || comp[i]=='i' || comp[i]=='-' || comp[i]=='.')) return 0; //verifica se há algum caractere diferente de números, +, - ou a letra i
    }
    if(aux==1) return 1;
    else return 0;
}

int verifica_formato_geo(char * comp){
    int i, aux=0;
    for(i=0;comp[i]!='\0';i++){
        if(i==0 && comp[i]!='[') return 0;
        if(comp[i+1]=='\0' && comp[i]!=']') return 0;
        if((i==1 || comp[i+1]==']') && comp[i]==',') return 0;
        if(comp[i]==',') aux=1;
        if(!(comp[i]>=48 && comp[i]<=57 || comp[i]==',' || comp[i]=='[' || comp[i]==']' || comp[i]=='.')) return 0;
    }
    if(aux==1) return 1;
    else return 0;
}

int verifica_formato_polar(char * comp){
    int i, aux=0;
    for(i=0;comp[i]!='\0';i++){
        if(comp[i]==';') aux=1;
        if(!(comp[i]>=48 && comp[i]<=57 || comp[i]==';' || comp[i]=='.')) return 0;
        if((i==0 || comp[i+1]=='\0') && (comp[i]==';' || comp[i]=='.')) return 0;
    }
    if(aux==1) return 1;
    else return 0;
}

int verifica_numero_decimal(double n){
    double f, c;
    f = floor(n);
    c = ceil(n);

    if(n>f+0.001 && n<c-0.001) return 1;
    else return 0;
}

void print_complex_alg(double d1, double d2){
    int f1, f2;
    f1 = verifica_numero_decimal(d1);
    f2 = verifica_numero_decimal(d2);
    if(d1!=0 && d2>0){
        if(f1==0) printf("%.0lf", d1);
        else printf("%.2lf", d1);
        if(f2==0) printf("+%.0lfi\n", d2);
        else printf("+%.2lfi\n", d2);
    }
    else if(d1!=0 && d2<0){
        if(f1==0) printf("%.0lf", d1);
        else printf("%.2lf", d1);
        if(f2==0) printf("%.0lfi\n", d2);
        else printf("%.2lfi\n", d2);
    }
    else if(d1!=0 && d2==0){
        if(f1==0) printf("%.0lf\n", d1);
        else printf("%.2lf\n", d1);
    }
    else if(d1==0){
        if(d2==0) printf("0\n");
        else{
            if(f2==0) printf("%.0lfi\n", d2);
            else printf("%.2lfi\n", d2);
        }
    }
}

void print_complex_geo(double d1, double d2){
    int f1, f2;
    f1 = verifica_numero_decimal(d1);
    f2 = verifica_numero_decimal(d2);

    if(f1==0) printf("[%.0lf,", d1);
    else printf("[%.2lf,", d1);

    if(f2==0) printf("%.0lf]\n", d2);
    else printf("%.2lf]\n", d2);
}

void print_complex_polar(double d1, double d2){
    int f1, f2;
    f1 = verifica_numero_decimal(d1);
    f2 = verifica_numero_decimal(d2);

    if(f1==0) printf("%.0lf;", d1);
    else printf("%.2lf;", d1);

    if(f2==0) printf("%.0lf\n", d2);
    else printf("%.2lf\n", d2);
}