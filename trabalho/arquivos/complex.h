
#ifndef __COMPLEX__H__
#define __COMPLEX__H__

typedef struct{
    double a;
    double b;
} complex_geo;

typedef struct{
    double r;
    double theta;
} complex_polar;

typedef struct{
    double real;
    double img;
} complex_alg;

typedef struct {
	char code[2];
	double real;
	double img;
} complex;

/**
 * @brief Converte um número complexo na forma algébrica para a forma geométrica
 * 
 * @param real parte real
 * @param img parte imaginária
 * @return complex_converted* - ponteiro para uma struct contendo os parâmetros do número complexo na forma geométrica
 */
complex_geo * convert_alg_to_geo(double real, double img);

/**
 * @brief Converte um número complexo na forma algébrica para a forma polar
 * 
 * @param real parte real
 * @param img parte imaginaria
 * @return complex_polar* ponteiro para uma struct contendo os parâmetros do número complexo na forma polar
 */
complex_polar * convert_alg_to_polar(double real, double img);

/**
 * @brief Converte um número complexo na forma geométrica para a forma algébrica
 * 
 * @param a 
 * @param b 
 * @return complex_alg* ponteiro para uma struct contendo os parâmetros do número complexo na forma algébrica
 */
complex_alg * convert_geo_to_alg(double a, double b);

/**
 * @brief Converte um número complexo na forma polar para a forma algébrica
 * 
 * @param r 
 * @param theta 
 * @return complex_alg* ponteiro para uma struct contendo os parâmetros do número complexo na forma algébrica
 */
complex_alg * convert_polar_to_alg(double r, double theta);


/**
 * @brief Converte um angulo em graus para radianos
 * 
 * @param angle angulo em graus
 * @return double angulo em radianos
 */
double convert_degrees_to_rad(double angle);

/**
 * @brief Converte um angulo em radianos para graus
 * 
 * @param angle 
 * @return double 
 */
double convert_rad_to_degrees(double angle);

//funções que verificam se a string com o número complexo está no formato correto, retornando 1 se estiver correto e 0 se estiver incorreto

int verifica_formato_alg(char * comp);
int verifica_formato_geo(char * comp);
int verifica_formato_polar(char * comp);

/**
 * @brief Verifica se um número tem parte decimal não nula ou não
 * 
 * @param n 
 * @return int 1 se possuir parte decimal, 0 se não
 */
int verifica_numero_decimal(double n);

/**
 * @brief Imprime um número complexo na forma algébrica
 * 
 * @param d1 
 * @param d2 
 */
void print_complex_alg(double d1, double d2);

/**
 * @brief Imprime um número complexo na forma geométrica
 * 
 * @param d1 
 * @param d2 
 */
void print_complex_geo(double d1, double d2);

/**
 * @brief Imprime um número complexo na forma polar
 * 
 * @param d1 
 * @param d2 
 */
void print_complex_polar(double d1, double d2);

#endif