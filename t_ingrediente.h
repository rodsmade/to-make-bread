#ifndef T_INGREDIENTE_H
# define T_INGREDIENTE_H

# include <stdio.h> // srintf

typedef struct  s_ingrediente {
    double quantidade;
    char *unidade;
    char *ingrediente;
}               t_ingrediente;

char *ingrediente_para_string(t_ingrediente ingrediente, int qtd_pessoas);

#endif